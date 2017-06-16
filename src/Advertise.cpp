
#include "../include/Advertise.hpp"

void Advertise::createAd(User *currentUser, vector<string> fields) {
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
    newAd.setPrice(atof(fields[2]));
    newAd.setAmount(atoi(fields[3]));
    newAd.setDescription(fields[4]);

    flag = sqlite3_open(DATABASE, &connection);
    if(flag!=SQLITE_OK)
        throw (char *) REGISTER_AD_ERROR;

    newAd.insertOperation(connection, &newAd);

    flag = sqlite3_close(connection);
    if(flag!=SQLITE_OK)
        throw (char *) REGISTER_AD_ERROR;
}

void Advertise::deleteAd(unsigned int id) {
    int result, flag;
    char *errMsg = 0;
    char SQL[50];
    sqlite3 *connection;

    sprintf(SQL, "DELETE FROM ADS WHERE id=%d", id);

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

void Advertise::editAd(unsigned int id, vector<string> fields){
    sqlite3 *connection;
    int flag;
    Ads currentAd(id);
    currentAd.setCategory(fields[0]);
    currentAd.setTitle(fields[1]);
    currentAd.setPrice(atof(fields[2]));
    currentAd.setAmount(atoi(fields[3]));
    currentAd.setDescription(fields[4]);

    flag = sqlite3_open(DATABASE, &connection);
    if(flag!=SQLITE_OK)
        throw (char *) MODIFY_AD_ERROR;

    currentAd.updateOperation(connection, &currentAd);

    flag = sqlite3_close(connection);
    if(flag!=SQLITE_OK)
        throw (char *) MODIFY_AD_ERROR;
}