
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
void Historic::setRating(unsigned int rating){
    this->rating = rating;
}
unsigned int Historic::getRating(){
    return this->rating;
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
string Historic::getDate(){
    return this->date;
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
            "  `rating`         UNSIGNED INT                      NOT NULL,"\
            "  `adId`           UNSIGNED INT                      NOT NULL,"\
            "  `quantity`       UNSIGNED INT                      NOT NULL,"\
            "  `adTitle`        VARCHAR(20)                       NOT NULL,"\
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
    char SQL[1500];
    sprintf(SQL, "INSERT INTO HISTORIC ("\
    "sellerId, sellerUsername, buyerId, buyerUsername, rating, adId, quantity, adTitle, price, date)"\
    " VALUES(%d,'%s',%d,'%s',%d,%d,%d,'%s',%s,'%s');",
     newEntry->getSellerId(), newEntry->getSellerUsername().c_str(), newEntry->getBuyerId(),\
     newEntry->getBuyerUsername().c_str(), newEntry->getRating(), newEntry->getAdId(), newEntry->getQuantity(),newEntry->getAdTitle().c_str(),\
     price.c_str(), newEntry->getDate().c_str());
    result = sqlite3_exec(connection, SQL, Callbacks::historicCallback, 0, &errMsg);
    if(result != SQLITE_OK)
        throw errMsg;
}