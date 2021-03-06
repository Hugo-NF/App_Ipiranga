
#include "../include/Deals.hpp"

void Deals::createAd(User *currentUser, vector<string> fields, double price, unsigned int amount) {
    Ads newAd(0);
    sqlite3 *connection;
    int flag;
    newAd.setSellerRating(currentUser->getRating());
    newAd.setSellerId(currentUser->getId());
    newAd.setSellerUsername(currentUser->getUsername());
    newAd.setCity(currentUser->getCity());
    newAd.setState(currentUser->getState());
    newAd.setDate(Callbacks::getCurrentDate());
    newAd.setCategory(fields[0]);
    newAd.setTitle(fields[1]);
    newAd.setDescription(fields[2]);
    newAd.setPrice(price);
    newAd.setAmount(amount);
    Security::filter(&newAd);

    flag = sqlite3_open(DATABASE, &connection);
    if(flag!=SQLITE_OK)
        throw (char *) REGISTER_AD_ERROR;

    newAd.insertOperation(connection, &newAd);

    flag = sqlite3_close(connection);
    if(flag!=SQLITE_OK)
        throw (char *) REGISTER_AD_ERROR;
}

void Deals::deleteAd(unsigned int id) {
    int result, flag;
    char *errMsg = 0;
    char SQL[50];
    sqlite3 *connection;

    sprintf(SQL, "DELETE FROM ADS WHERE id=%u", id);

    flag = sqlite3_open(DATABASE, &connection);
    if(flag!=SQLITE_OK)
        throw (char *) DELETE_AD_ERROR;

    result = sqlite3_exec(connection, SQL, Callbacks::adsCallback, 0, &errMsg);
    if(result != SQLITE_OK)
        throw (char *) DELETE_AD_ERROR;

    flag = sqlite3_close(connection);
    if(flag!=SQLITE_OK)
        throw (char *) DELETE_AD_ERROR;
}

void Deals::editAd(unsigned int id, vector<string> fields, double price, unsigned int amount){
    sqlite3 *connection;
    int flag;
    Ads currentAd(id);
    currentAd.setCategory(fields[0]);
    currentAd.setTitle(fields[1]);
    currentAd.setDescription(fields[2]);
    currentAd.setPrice(price);
    currentAd.setAmount(amount);
    currentAd.setDate(Callbacks::getCurrentDate());

    flag = sqlite3_open(DATABASE, &connection);
    if(flag!=SQLITE_OK)
        throw (char *) MODIFY_AD_ERROR;

    currentAd.updateOperation(connection, &currentAd);

    flag = sqlite3_close(connection);
    if(flag!=SQLITE_OK)
        throw (char *) MODIFY_AD_ERROR;
}