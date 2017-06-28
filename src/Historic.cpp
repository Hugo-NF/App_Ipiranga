
#include "../include/Historic.hpp"

unsigned int Historic::getId(){
    return this->id;
}
void Historic::setSellerId(unsigned int id){
    this->sellerId = id;
}
unsigned int Historic::getSellerId(){
    return this->sellerId;
}
void Historic::setSellerUsername(string username){
    this->sellerUsername = username;
}
string Historic::getSellerUsername(){
    return this->sellerUsername;
}
void Historic::setBuyerId(unsigned int id){
    this->buyerId = id;
}
unsigned int Historic::getBuyerId(){
    return this->buyerId;
}
void Historic::setBuyerUsername(string username){
    this->buyerUsername = username;
}
string Historic::getBuyerUsername(){
    return this->buyerUsername;
}
void Historic::setSellerRating(unsigned int rating){
    this->selleRating = rating;
}
unsigned int Historic::getSellerRating(){
    return this->selleRating;
}
void Historic::setBuyerRating(unsigned int rating){
    this->buyeRating = rating;
}
unsigned int Historic::getBuyerRating(){
    return this->buyeRating;
}
void Historic::setAdId(unsigned int id){
    this->adId = id;
}
unsigned int Historic::getAdId(){
    return this->adId;
}
void Historic::setAdTitle(string title){
    this->adTitle = title;
}
string Historic::getAdTitle(){
    return this->adTitle;
}
void Historic::setQuantity(unsigned int quantity) {
    this->quantity = quantity;
}
unsigned int Historic::getQuantity() {
    return this->quantity;
}
void Historic::setPrice(double price){
    this->price = price;
}
double Historic::getPrice(){
    return this->price;
}
void Historic::setDate(string date){
    this->date = date;
}
void Historic::setCategory(string category){
    this->category = category;
}
string Historic::getCategory(){
    return this->category;
}

string Historic::getDate(){
    return this->date;
}

unsigned int Historic::getUserRating(unsigned int id){
    if(id == this->getBuyerId()){
        return this->getSellerRating();
    }
    else {
        return this->getBuyerRating();
    }
}

void Historic::createTable(sqlite3 *connection) {
    int result;
    char *errMsg = 0;
    string SQL = "CREATE TABLE IF NOT EXISTS HISTORIC ("\
            "  `id`             INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,"\
            "  `sellerId`       UNSIGNED INT                      NOT NULL,"\
            "  `sellerUsername` VARCHAR(20)                       NOT NULL,"\
            "  `buyerId`        UNSIGNED INT                      NOT NULL,"\
            "  `buyerUsername`  VARCHAR(20)                       NOT NULL,"\
            "  `selleRating`    UNSIGNED INT                      NOT NULL,"\
            "  `buyeRating`     UNSIGNED INT                      NOT NULL,"\
            "  `adId`           UNSIGNED INT                      NOT NULL,"\
            "  `quantity`       UNSIGNED INT                      NOT NULL,"\
            "  `adTitle`        VARCHAR(20)                       NOT NULL,"\
            "  `category`       VARCHAR(20)                       NOT NULL,"\
            "  `price`          DOUBLE                            NOT NULL,"\
            "  `date`           VARCHAR(30)                       NOT NULL);";
    result = sqlite3_exec(connection, SQL.c_str(), Callbacks::historicCallback, 0, &errMsg);
    if(result != SQLITE_OK)
        throw errMsg;
}

void Historic::deleteTable(sqlite3 *connection) {
    int result;
    char *errMsg = 0;
    string SQL = "DROP TABLE IF EXISTS HISTORIC";
    result = sqlite3_exec(connection, SQL.c_str(), Callbacks::historicCallback, 0, &errMsg);
    if(result != SQLITE_OK)
        throw errMsg;
}

void Historic::cleanTable() {
    sqlite3 *connection;
    int flag = sqlite3_open(DATABASE, &connection);
    if(flag!= SQLITE_OK)
        throw (char *) CONNECTION_ERROR;
    Historic::deleteTable(connection);
    Historic::createTable(connection);
    flag = sqlite3_close(connection);
    if(flag != SQLITE_OK)
        throw (char *) CONNECTION_ERROR;
}

void Historic::insertOperation(sqlite3 *connection, Historic *newEntry) {
    int result;
    ostringstream streamPrice;
    streamPrice << newEntry->getPrice();
    string price = streamPrice.str();
    char *errMsg = 0;
    char SQL[5000];
    sprintf(SQL, "INSERT INTO HISTORIC ("\
    "sellerId, sellerUsername, buyerId, buyerUsername, selleRating, buyeRating, adId, quantity, adTitle, category, price, date)"\
    " VALUES(%d,'%s',%d,'%s',%d,%d,%d,%d,'%s','%s',%s,'%s');", newEntry->getSellerId(), newEntry->getSellerUsername().c_str(), newEntry->getBuyerId(),\
     newEntry->getBuyerUsername().c_str(), newEntry->getSellerRating(), newEntry->getBuyerRating(),\
     newEntry->getAdId(), newEntry->getQuantity(),newEntry->getAdTitle().c_str(),\
     newEntry->getCategory().c_str(), price.c_str(), newEntry->getDate().c_str());
    cout<<SQL<<endl;
    result = sqlite3_exec(connection, SQL, Callbacks::historicCallback, 0, &errMsg);
    if(result != SQLITE_OK)
        throw errMsg;
}

void Historic::evaluate(Historic *entry, unsigned int id, unsigned int rating) {
    sqlite3 *connection;
    int flag;
    double newAverage1;
    double newAverage2;
    char *errMsg = 0;
    char SQL[300];
    ostringstream streamRating;

    flag = sqlite3_open(DATABASE, &connection);
    if(flag!= SQLITE_OK)
        throw (char *) CONNECTION_ERROR;
    if(id == entry->getSellerId()){
        sprintf(SQL, "UPDATE HISTORIC set buyeRating = %u WHERE id = %u AND adId = %u;", rating, entry->getId(), entry->getAdId());
        flag = sqlite3_exec(connection, SQL, Callbacks::historicCallback, 0, &errMsg);
        if(flag != SQLITE_OK)
            throw (char *) CONNECTION_ERROR;
        sprintf(SQL, "SELECT AVG(buyeRating) FROM HISTORIC WHERE buyerId = %u AND NOT buyeRating = 0;", entry->getBuyerId());
        flag = sqlite3_exec(connection, SQL, Callbacks::averageCallback, &newAverage1, &errMsg);
        if(flag != SQLITE_OK)
            throw (char *) CONNECTION_ERROR;
        sprintf(SQL, "SELECT AVG(selleRating) FROM HISTORIC WHERE sellerId = %u AND NOT selleRating = 0;", entry->getBuyerId());
        flag = sqlite3_exec(connection, SQL, Callbacks::averageCallback, &newAverage2, &errMsg);
        if(flag != SQLITE_OK)
            throw (char *) CONNECTION_ERROR;
        streamRating<<((newAverage1+newAverage2)/2);
        string s_rating = streamRating.str();
        sprintf(SQL, "UPDATE USERS set rating = %s WHERE id = %u AND username = '%s';", s_rating.c_str(), entry->getBuyerId(), entry->getBuyerUsername().c_str());
        flag = sqlite3_exec(connection, SQL, Callbacks::userCallback, 0, &errMsg);
        if(flag != SQLITE_OK)
            throw (char *) CONNECTION_ERROR;
        sprintf(SQL, "UPDATE ADS set sellerRating = %s WHERE id = %u AND sellerUsername = '%s';", s_rating.c_str(), entry->getAdId(), entry->getBuyerUsername().c_str());
        flag = sqlite3_exec(connection, SQL, Callbacks::adsCallback, 0, &errMsg);
        if(flag != SQLITE_OK)
            throw (char *) CONNECTION_ERROR;

    } else if (id == entry->getBuyerId()){
        sprintf(SQL, "UPDATE HISTORIC set selleRating = %u WHERE id = %u AND adId = %u;", rating, entry->getId(), entry->getAdId());
        flag = sqlite3_exec(connection, SQL, Callbacks::historicCallback, 0, &errMsg);
        if(flag != SQLITE_OK)
            throw (char *) CONNECTION_ERROR;
        sprintf(SQL, "SELECT AVG(selleRating) FROM HISTORIC WHERE sellerId = %u AND NOT selleRating = 0;", entry->getSellerId());
        flag = sqlite3_exec(connection, SQL, Callbacks::averageCallback, &newAverage1, &errMsg);
        if(flag != SQLITE_OK)
            throw (char *) CONNECTION_ERROR;
        sprintf(SQL, "SELECT AVG(buyeRating) FROM HISTORIC WHERE buyerId = %u AND NOT buyeRating = 0;", entry->getSellerId());
        flag = sqlite3_exec(connection, SQL, Callbacks::averageCallback, &newAverage2, &errMsg);
        if(flag != SQLITE_OK)
            throw (char *) CONNECTION_ERROR;
        streamRating<<((newAverage1+newAverage2)*0.5);
        string s_rating = streamRating.str();
        sprintf(SQL, "UPDATE USERS set rating = %s WHERE id = %u AND username = '%s';", s_rating.c_str(), entry->getSellerId(), entry->getSellerUsername().c_str());
        flag = sqlite3_exec(connection, SQL, Callbacks::userCallback, 0, &errMsg);
        if(flag != SQLITE_OK)
            throw (char *) CONNECTION_ERROR;
        sprintf(SQL, "UPDATE ADS set sellerRating = %s WHERE id = %u AND seller = '%s';", s_rating.c_str(), entry->getAdId(), entry->getSellerUsername().c_str());
        flag = sqlite3_exec(connection, SQL, Callbacks::adsCallback, 0, &errMsg);
        if(flag != SQLITE_OK)
            throw (char *) CONNECTION_ERROR;

    }

    flag = sqlite3_close(connection);
    if(flag!= SQLITE_OK)
        throw (char *) CONNECTION_ERROR;
}

vector<Historic *> Historic::retrieveHistoric(unsigned int userId, bool asSeller, bool asBuyer) {
    sqlite3 *connection;
    int flag;
    char *errMsg = 0;
    char SQL[300];
    vector <Historic *> results;

    flag = sqlite3_open(DATABASE, &connection);
    if(flag!= SQLITE_OK)
        throw (char *) CONNECTION_ERROR;

    if((asBuyer && asSeller) || (!asBuyer && !asSeller)){
        sprintf(SQL, "SELECT * FROM HISTORIC WHERE sellerId = %u OR buyerID = %u;", userId, userId);
    } else if (asBuyer){
        sprintf(SQL, "SELECT * FROM HISTORIC WHERE buyerId = %u;", userId);
    } else {
        sprintf(SQL, "SELECT * FROM HISTORIC WHERE sellerId = %u;", userId);
    }

    flag = sqlite3_exec(connection, SQL, Callbacks::historicCallback, &results, &errMsg);
    if(flag != SQLITE_OK)
        throw errMsg;

    flag = sqlite3_close(connection);
    if(flag!= SQLITE_OK)
        throw (char *) CONNECTION_ERROR;

    return results;
}

