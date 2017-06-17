#include "../include/Payment.hpp"

void Payment::addToHistoric(Ads *ad, User *buyer, unsigned int quantity) {
    sqlite3 *connection;
    int flag;

    Historic entry(0);
    entry.setSellerId(ad->getSellerId());
    entry.setSellerUsername(ad->getSellerUsername());
    entry.setBuyerId(buyer->getId());
    entry.setBuyerUsername(buyer->getUsername());
    entry.setRating(0);
    entry.setAdId(ad->getId());
    entry.setAdTitle(ad->getTitle());
    entry.setQuantity(quantity);
    entry.setPrice(ad->getPrice());
    entry.setDate(Callbacks::getCurrentDate());

    flag = sqlite3_open(DATABASE, &connection);
    if(flag!=SQLITE_OK)
        throw (char *) CONNECTION_ERROR;

    entry.insertOperation(connection, &entry);

    flag = sqlite3_close(connection);
    if(flag!=SQLITE_OK)
        throw (char *) CONNECTION_ERROR;
}
