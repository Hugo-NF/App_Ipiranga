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
/*
vector<User *> Search::userSearch(Search *parameters) {
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
*/