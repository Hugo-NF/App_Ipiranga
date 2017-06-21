#include "../include/Search.hpp"

unsigned int Search::getCurrentUserID(){
    return this->currentUserID;
}
void Search::enableTextSearch(bool toggle) {
    this->toggleText = toggle;
}
bool Search::textSearchEnabled() {
    return this->toggleText;
}
void Search::setText(string query) {
    this->textSearch = query;
}
string Search::getText() {
    return this->textSearch;
}
void Search::enableFilters(bool toggle) {
    this->toggleFilters = toggle;
}
bool Search::filtersEnabled() {
    return this->toggleFilters;
}
void Search::setCriterias(vector<string> criterias) {
    this->criterias = criterias;
}
vector<string> Search::getCriterias(){
    return this->criterias;
}
void Search::setKeywords(vector<string> keywords) {
    this->keywords = keywords;
}
vector<string> Search::getKeywords() {
    return this->keywords;
}
void Search::enableOrdenation(bool toggle) {
    this->toggleOrdernation = toggle;
}
bool Search::ordenationEnabled() {
    return this->toggleOrdernation;
}
void Search::setOrderBy(string ordenationCriteria) {
    this->orderBy = ordenationCriteria;
}
string Search::getOrderBy() {
    return this->orderBy;
}
void Search::setOrderingSequence(bool order) {
    this->orderSequence = order;
}
bool Search::getOrderingSequence() {
    return this->orderSequence;
}
void Search::enablebandFilter(bool toggle) {
    this->toggleBandFilter = toggle;
}
bool Search::bandFilterEnabled() {
    return this->toggleBandFilter;
}
void Search::setBandFilterCriteria(string criteria) {
    this->bandFilterCriteria = criteria;
}
string Search::getBandFilterCriteria() {
    return this->bandFilterCriteria;
}
void Search::setMinValue(double minValue) {
    this->bandFilterMin = minValue;
}
double Search::getMinValue() {
    return this->bandFilterMin;
}
void Search::setMaxValue(double maxValue) {
    this->bandFilterMax = maxValue;
}
double Search::getMaxValue() {
    return this->bandFilterMax;
}
void Search::enableFriendsSearch(bool toggle) {
    this->toggleFriends = toggle;
}
bool Search::friendsSearchEnabled(){
    return this->toggleFriends;
}
void Search::enableFriendsofFriendsSearch(bool toggle) {
    this->toggleFriendsofFriends = toggle;
}
bool Search::friendsOfFriendsSearchEnabled() {
    return this->toggleFriendsofFriends;
}

unsigned int currentUserID;
string table;
bool toggleText;
string textSearch;
bool toggleFilters;
vector<string> criterias;
vector<string> keywords;
bool toggleOrdernation;
string orderBy;
bool orderSequence; //true - ASC : false - DESC
bool toggleBandFilter;
string bandFilterCriteria;
double bandFilterMin;
double bandFilterMax;
bool toggleFriends;
bool toggleFriendsofFriends;

unsigned int getCurrentUserID(); //ok
bool textSearchEnabled(); //ok
string getText(); //ok
bool filtersEnabled(); //ok
vector<string> getCriterias(); //ok
vector<string> getKeywords(); //ok
bool ordenationEnabled(); //ok
string getOrderBy(); //ok
bool getOrderingSequence(); //ok
bool bandFilterEnabled(); //ok
string getBandFilterCriteria(); //ok
double getMinValue(); //ok
double getMaxValue(); //ok
bool friendsSearchEnabled();
bool friendsOfFriendsSearchEnabled();

vector<User *> Search::userSearch(Search *parameters) {
    int i, j, flag;
    char *errMsg = 0;
    string SQL = "SELECT * FROM USERS WHERE ";
    string textQuery;
    string ordenationQuery;
    string filtersQuery;
    string bandFilterQuery;
    ostringstream streamValue;
    string value;
    vector<string> criterias;
    vector<string> keywords;
    vector<unsigned int> friends;
    vector<unsigned int> friendsOf;
    string friendsQuery = " ";
    sqlite3 *connection;
    vector<User *> queryResult;


    flag = sqlite3_open(DATABASE, &connection);
    if (flag != SQLITE_OK)
        throw (char *) CONNECTION_ERROR;

    if(parameters->textSearchEnabled()){
        textQuery = "username LIKE '%";
        textQuery.append(parameters->getText());
        textQuery.append("%' OR firstName LIKE '%");
        textQuery.append(parameters->getText());
        textQuery.append("%' ");
        SQL.append(textQuery);

    }
    if(parameters->filtersEnabled()){
        criterias = parameters->getCriterias();
        keywords = parameters->getKeywords();
        //filtersQuery = "WHERE ";
        for(i=0; i<criterias.size()-1; i++){
            filtersQuery.append(criterias[i]);
            filtersQuery.append(" = ");
            filtersQuery.append(keywords[i]);
            filtersQuery.append(" AND ");
        }
        filtersQuery.append(criterias[i]);
        filtersQuery.append(" = ");
        filtersQuery.append(keywords[i]);
        if(parameters->textSearchEnabled()){
            SQL.append("AND ");
            SQL.append(filtersQuery);
        }
    }
    if(parameters->bandFilterEnabled()){
        streamValue << parameters->getMinValue();
        value = streamValue.str();
        bandFilterQuery = parameters->getBandFilterCriteria();
        bandFilterQuery.append(" BETWEEN ");
        bandFilterQuery.append(value);
        bandFilterQuery.append(" AND ");
        streamValue << parameters->getMaxValue();
        value = streamValue.str();
        bandFilterQuery.append(value);
        if(parameters->textSearchEnabled() || parameters->filtersEnabled())
            SQL.append(" AND ");
        SQL.append(bandFilterQuery);
    }
    if(parameters->friendsSearchEnabled()){
        friends = Friendship::getFriendsIds(connection, parameters->getCurrentUserID());
        for(i=0; i<friends.size()-1; i++){
            friendsQuery.append("id = ");
            friendsQuery.append(friends[i]);
            friendsQuery.append(" OR ");
        }
        friendsQuery.append("id = ");
        friendsQuery.append(friends[i]);
        if(parameters->textSearchEnabled() || parameters->filtersEnabled() || parameters->bandFilterEnabled())
            SQL.append(" AND ");
        SQL.append(friendsQuery);
    }
    else if(parameters->friendsOfFriendsSearchEnabled()){
        friendsOf = Friendship::getFriendsofFriendsIds(connection, parameters->getCurrentUserID());
        for(i=0; i<friends.size()-1; i++){
            friendsQuery.append("id = ");
            friendsQuery.append(friends[i]);
            friendsQuery.append(" OR ");
        }
        friendsQuery.append("id = ");
        friendsQuery.append(friends[i]);
        if(parameters->textSearchEnabled() || parameters->filtersEnabled() || parameters->bandFilterEnabled())
            SQL.append(" AND ");
        SQL.append(friendsQuery);

    }
    if(parameters->ordenationEnabled()){
        ordenationQuery = "ORDER BY ";
        ordenationQuery.append(parameters->getOrderBy());
        if(parameters->getOrderingSequence()){
            ordenationQuery.append(" ASC");
        }
        else
            ordenationQuery.append(" DESC");
        if(parameters->textSearchEnabled() || parameters->filtersEnabled() || parameters->bandFilterEnabled())
            SQL.append(" AND ");
        SQL.append(ordenationQuery);
    }
    SQL.append(";");
    flag = sqlite3_exec(connection, SQL.c_str(), Callbacks::userCallback, &queryResult, &errMsg);
    if (flag != SQLITE_OK)
        throw (char *) CONNECTION_ERROR;

    flag = sqlite3_close(connection);
    if (flag != SQLITE_OK)
        throw (char *) CONNECTION_ERROR;


}
/*
vector<User *> Search::userSearch(Search *parameters) {
    int i, flag;
    string SQL;
    string textQuery;
    string filtersQuery;
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
*/
