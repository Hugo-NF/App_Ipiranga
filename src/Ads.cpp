#include "../include/Ads.hpp"

unsigned int Ads::getId(){
    return this->id;
}

void Ads::setTitle(string title) {
    this->title = title;
}
string Ads::getTitle() {
    return this->title;
}
void Ads::setDate(string date) {
    this->date = date;
}
string Ads::getDate() {
    return this->date;
}
void Ads::setCategory(string category) {
    this->category = category;
}
string Ads::getCategory() {
    return this->category;
}
void Ads::setCity(string city) {
    this->city = city;
}
string Ads::getCity() {
    return this->city;
}
void Ads::setAmount(unsigned int amount) {
    this->amount = amount;
}
unsigned int Ads::getAmount() {
    return this->amount;
}
void Ads::setDescription(string description) {
    this->description = description;
}
string Ads::getDescription() {
    return this->description;
}
void Ads::setState(string state) {
    this->state = state;
}
string Ads::getState() {
    return this->state;
}
void Ads::setSellerUsername(string sellerUsername) {
    this->sellerUsername = sellerUsername;
}
string Ads::getSellerUsername() {
    return this->sellerUsername;
}

void Ads::setSellerRating(double rating) {
    this->sellerRating = rating;
}

double Ads::getSellerRating() {
    return this->sellerRating;
}

void Ads::setSellerId(unsigned int sellerId) {
    this->sellerId = sellerId;
}
unsigned int Ads::getSellerId() {
    return this->sellerId;
}
void Ads::setPrice(double price) {
    this->price = price;
}
double Ads::getPrice() {
    return this->price;
}

void Ads::deallocateAds(vector<Ads*> vector){
    for(unsigned int i= 0; i<vector.size(); i++){
        delete vector[i];
    }
}

void Ads::createTable(sqlite3 *connection) {
    int result;
    char *errMsg = 0;
    string SQL = "CREATE TABLE IF NOT EXISTS ADS ("\
            "  `id`             INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,"\
            "  `title`          VARCHAR(20)                       NOT NULL,"\
            "  `category`       VARCHAR(20)                       NOT NULL,"\
            "  `date`           VARCHAR(30)                       NOT NULL,"\
            "  `seller`         VARCHAR(20)                       NOT NULL,"\
            "  `sellerId`       UNSIGNED INT                      NOT NULL,"\
            "  `description`    VARCHAR(540)                      NOT NULL,"\
            "  `city`           VARCHAR(20)                       NOT NULL,"\
            "  `state`          VARCHAR(2)                        NOT NULL,"\
            "  `quantity`       UNSIGNED INT(3)                   NOT NULL,"\
            "  'sellerRating'   DOUBLE                            NOT NULL,"\
            "  `price`          DOUBLE                            NOT NULL);";
    result = sqlite3_exec(connection, SQL.c_str(), Callbacks::adsCallback, 0, &errMsg);
    if(result != SQLITE_OK)
        throw errMsg;
}

void Ads::deleteTable(sqlite3 *connection) {
    int result;
    char *errMsg = 0;
    string SQL = "DROP TABLE IF EXISTS ADS;";
    result = sqlite3_exec(connection, SQL.c_str(), Callbacks::adsCallback, 0, &errMsg);
    if(result != SQLITE_OK)
        throw errMsg;
}

void Ads::cleanTable() {
    sqlite3 *connection;
    int flag = sqlite3_open(DATABASE, &connection);
    if(flag!= SQLITE_OK)
        throw (char *) CONNECTION_ERROR;
    Ads::deleteTable(connection);
    Ads::createTable(connection);
    flag = sqlite3_close(connection);
    if(flag != SQLITE_OK)
        throw (char *) CONNECTION_ERROR;
}

void Ads::insertOperation(sqlite3 *connection, Ads *newAd) {
    int result;
    ostringstream streamPrice;
    streamPrice << newAd->getPrice();
    string price = streamPrice.str();
    ostringstream streamRating;
    streamRating << newAd->getSellerRating();
    string rating = streamRating.str();
    char *errMsg = 0;
    char SQL[3000];
    sprintf(SQL, "INSERT INTO ADS ("\
    "title, category, date, seller, sellerId, description, city, state, quantity, sellerRating,"\
    "price) VALUES('%s','%s','%s','%s',%u,'%s','%s','%s',%u,%s,%s);", newAd->getTitle().c_str(),\
    newAd->getCategory().c_str(), newAd->getDate().c_str(), newAd->getSellerUsername().c_str(), newAd->getSellerId(),\
    newAd->getDescription().c_str(), newAd->getCity().c_str(), newAd->getState().c_str(), newAd->getAmount(),\
    rating.c_str(), price.c_str());
    result = sqlite3_exec(connection, SQL, Callbacks::adsCallback, 0, &errMsg);
    if(result != SQLITE_OK)
        throw errMsg;
}

void Ads::updateOperation(sqlite3 *connection, Ads *currentAd) {
    int result;
    char *errMsg = 0;
    char SQL[1500];
    sprintf(SQL, "UPDATE ADS set title='%s', category='%s', date='%s', description='%s', quantity=%u WHERE id = %u;",
    currentAd->getTitle().c_str(), currentAd->getCategory().c_str(), currentAd->getDate().c_str(), currentAd->getDescription().c_str(), currentAd->getAmount(), currentAd->getId());
    result = sqlite3_exec(connection, SQL, Callbacks::adsCallback, 0, &errMsg);
    if(result != SQLITE_OK)
        throw errMsg;
}
