#include "../include/Friendship.hpp"

void Friendship::setUser1Id(unsigned int id) {
    this->idUser1 = id;
}
void Friendship::setUser2Id(unsigned int id) {
    this->idUser2 = id;
}
unsigned int Friendship::getUser1Id() {
    return this->idUser1;
}
unsigned int Friendship::getUser2Id() {
    return this->idUser2;
}
unsigned int Friendship::getId() {
    return this->id;
}

void Friendship::createTable(sqlite3 *connection) {
    int result;
    char *errMsg = 0;
    string SQL = "CREATE TABLE IF NOT EXISTS FRIENDS ("\
            "  `id`             INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,"\
            "  `idUser1`        UNSIGNED INT                       NOT NULL,"\
            "  `idUser2`        UNSIGNED INT                       NOT NULL);";
    result = sqlite3_exec(connection, SQL.c_str(), Callbacks::friendshipCallback, 0, &errMsg);
    if(result != SQLITE_OK)
        throw errMsg;
}

void Friendship::deleteTable(sqlite3 *connection) {
    int result;
    char *errMsg = 0;
    string SQL = "DROP TABLE IF EXISTS FRIENDS;";
    result = sqlite3_exec(connection, SQL.c_str(), Callbacks::friendshipCallback, 0, &errMsg);
    if(result != SQLITE_OK)
        throw errMsg;
}

void Friendship::cleanTable() {
    sqlite3 *connection;
    int flag = sqlite3_open(DATABASE, &connection);
    if(flag!= SQLITE_OK)
        throw (char *) CONNECTION_ERROR;
    Friendship::deleteTable(connection);
    Friendship::createTable(connection);
    flag = sqlite3_close(connection);
    if(flag != SQLITE_OK)
        throw (char *) CONNECTION_ERROR;
}

void Friendship::addAsFriend(unsigned int currentUserId, unsigned int newFriendId) {
    int flag;
    char *errMsg = 0;
    unsigned int result;
    sqlite3 *connection;
    char SQL[5000];

    flag = sqlite3_open(DATABASE, &connection);
    if(flag!= SQLITE_OK)
        throw (char *) CONNECTION_ERROR;

    sprintf(SQL, "SELECT COUNT(id) FROM FRIENDS WHERE idUser1 = %u AND idUser2 = %u OR idUser1 = %u AND idUser2 = %u;", currentUserId, newFriendId, newFriendId, currentUserId);
    flag = sqlite3_exec(connection, SQL, Callbacks::countCallback, &result, &errMsg);
    if(flag != SQLITE_OK)
        throw CONNECTION_ERROR;
    if(result == SQLITE_OK){
        sprintf(SQL, "INSERT INTO FRIENDS (idUser1, idUser2) VALUES(%u, %u);", currentUserId, newFriendId);

        flag = sqlite3_exec(connection, SQL, Callbacks::friendshipCallback, 0, &errMsg);
        if(flag != SQLITE_OK)
            throw CONNECTION_ERROR;

        flag = sqlite3_close(connection);
        if(flag!= SQLITE_OK)
            throw (char *) CONNECTION_ERROR;
    }
    else {
        throw (char *) FRIEND_REPEATED;
    }

}

void Friendship::removeFriend(unsigned int currentUserId, unsigned int rmFriendId) {
    int flag;
    char *errMsg = 0;
    sqlite3 *connection;
    char SQL[5000];

    flag = sqlite3_open(DATABASE, &connection);
    if(flag!= SQLITE_OK)
        throw (char *) CONNECTION_ERROR;

    sprintf(SQL, "DELETE FROM FRIENDS WHERE idUser1 = %u AND idUser2 = %u OR idUser1 = %u AND idUser2 = %u;", currentUserId, rmFriendId, rmFriendId, currentUserId);

    flag = sqlite3_exec(connection, SQL, Callbacks::friendshipCallback, 0, &errMsg);
    if(flag != SQLITE_OK)
        throw CONNECTION_ERROR;

    flag = sqlite3_close(connection);
    if(flag!= SQLITE_OK)
        throw (char *) CONNECTION_ERROR;
}

vector<unsigned int> Friendship::getFriendsIds(sqlite3 *connection, unsigned int currentUserId) {
    unsigned int i;
    int flag;
    char SQL[300];
    char *errMsg = 0;
    vector<unsigned int> results;
    vector<Friendship *> friendshipNodes;


    sprintf(SQL, "SELECT * FROM FRIENDS WHERE idUser1 = %u OR idUser2 = %u;", currentUserId, currentUserId);
    flag = sqlite3_exec(connection, SQL, Callbacks::friendshipCallback, &friendshipNodes, &errMsg);

    if(flag!= SQLITE_OK)
        throw (char *) CONNECTION_ERROR;
    for (i = 0; i < friendshipNodes.size(); i++) {
        if(friendshipNodes[i]->getUser1Id() == currentUserId)
            results.push_back(friendshipNodes[i]->getUser2Id());
        else
            results.push_back(friendshipNodes[i]->getUser1Id());
    }

    return results;
}

vector<unsigned int> Friendship::getFriendsofFriendsIds(sqlite3 *connection, unsigned int currentUserId) {
    unsigned int i;
    int flag;
    char SQL[5000];
    char friendsQuery[300];
    char *errMsg = 0;
    vector<unsigned int> fOfFriendsIds;
    vector<unsigned int> friendsIds;
    vector<unsigned int>::iterator it;
    vector<unsigned int> results;
    vector<Friendship *> friendshipNodes;

    friendsIds = Friendship::getFriendsIds(connection, currentUserId);
    if(!friendsIds.empty()){
        sprintf(SQL, "SELECT * FROM FRIENDS WHERE idUser1 = ");
        for(i=0; i<friendsIds.size()-1; i++){
            sprintf(friendsQuery, "%u OR idUser2 = %u AND idUser1 =", friendsIds[i], friendsIds[i]);
            strcat(SQL,friendsQuery);
        }
        sprintf(friendsQuery, "%u OR idUser2 = %u;", friendsIds[i], friendsIds[i]);
        strcat(SQL,friendsQuery);
        flag = sqlite3_exec(connection, SQL, Callbacks::friendshipCallback, &friendshipNodes, &errMsg);
        if(flag!= SQLITE_OK)
            throw (char *) CONNECTION_ERROR;
        for (i=0; i<friendshipNodes.size(); i++){
            if (friendshipNodes[i]->getUser1Id() == currentUserId)
                fOfFriendsIds.push_back(friendshipNodes[i]->getUser2Id());
            else
                fOfFriendsIds.push_back(friendshipNodes[i]->getUser1Id());
        }
        if(friendsIds.size() > fOfFriendsIds.size())
            results.resize(friendsIds.size());
        else
            results.resize(fOfFriendsIds.size());

        sort(friendsIds.begin(), friendsIds.end());
        sort(fOfFriendsIds.begin(), fOfFriendsIds.end());
        it = std::set_difference(friendsIds.begin(), friendsIds.end(), fOfFriendsIds.begin(), fOfFriendsIds.end(), results.begin());

        results.resize(it-results.begin());

    }
    return results;

}


