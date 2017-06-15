#include "../include/Search.hpp"

vector<User *> Search::userSearch(vector<string> criteria, vector<string> keywords) {
    int i, flag;
    char query[100];
    char SQL[5000];
    vector<User *> result;
    char *errMsg = 0;
    sqlite3 *connection;

    if(criteria[0].compare("ALL") == SQLITE_OK || keywords[0].compare("ALL") == SQLITE_OK){
        sprintf(SQL, "SELECT * FROM USERS");
    }
    else if (criteria.size() != keywords.size() || criteria.empty() || keywords.empty()){
        throw (char *) QUERY_INVALID;
    }
    else{
        sprintf(SQL, "SELECT * FROM USERS WHERE");
        for (i = 0; i <criteria.size()- 1; i++) {
            sprintf(query, "%s = '%s' AND ", criteria[i].c_str(), keywords[i].c_str());
            strcat(SQL, query);
            memset(query, 0, 100);
        }
        sprintf(query, "%s = '%s';", criteria[i].c_str(), keywords[i].c_str());
        strcat(SQL, query);
        memset(query, 0, 100);
    }

    flag = sqlite3_open(DATABASE, &connection);
    if (flag != SQLITE_OK)
        throw (char *) CONNECTION_ERROR;

    flag = sqlite3_exec(connection, SQL, Callbacks::userCallback, &result, &errMsg);

    if (flag != SQLITE_OK)
        throw errMsg;

    flag = sqlite3_close(connection);
    if (flag != SQLITE_OK)
        throw (char *) CONNECTION_ERROR;

    return result;
}
