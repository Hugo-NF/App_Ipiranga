#include "../include/Payment.hpp"


void Payment::makePayment(Ads *ad, User *buyer, unsigned int quantity) {
    sqlite3 *connection;
    double finalPrice = quantity*ad->getPrice();
    Historic entry(0);
    ostringstream streamPrice;
    streamPrice << finalPrice;
    string price = streamPrice.str();
    char SQL[500];
    char *errMsg = 0;
    int flag;

    if (ad->getSellerId() == buyer->getId())
        throw (char *) OWN_AD;
    if (ad->getAmount() < quantity || ad->getAmount() == 0)
        throw (char *) UNAVAIABLE_PRODUCT;
    ad->setAmount(ad->getAmount()-quantity);

    flag = sqlite3_open(DATABASE, &connection);
    if(flag!= SQLITE_OK)
        throw (char *) CONNECTION_ERROR;

    sprintf(SQL, "UPDATE USERS set balance = balance+%s WHERE id = %u AND username = '%s';", price.c_str(), ad->getSellerId(), ad->getSellerUsername().c_str());

    flag = sqlite3_exec(connection, SQL, Callbacks::historicCallback, 0, &errMsg);
    if(flag!= SQLITE_OK)
        throw (char *) PAYMENT_ERROR;

    sprintf(SQL, "UPDATE ADS set quantity = quantity-%u WHERE id = %u;", quantity, ad->getId());
    flag = sqlite3_exec(connection, SQL, Callbacks::historicCallback, 0, &errMsg);
    if(flag!= SQLITE_OK)
        throw (char *) PAYMENT_ERROR;

    entry.setSellerId(ad->getSellerId());
    entry.setSellerUsername(ad->getSellerUsername());
    entry.setBuyerId(buyer->getId());
    entry.setBuyerUsername(buyer->getUsername());
    entry.setCategory(ad->getCategory());
    entry.setBuyerRating(0);
    entry.setSellerRating(0);
    entry.setAdId(ad->getId());
    entry.setAdTitle(ad->getTitle());
    entry.setQuantity(quantity);
    entry.setPrice(ad->getPrice());
    entry.setDate(Callbacks::getCurrentDate());

    entry.insertOperation(connection, &entry);

    flag = sqlite3_close(connection);
    if(flag != SQLITE_OK)
        throw (char *) CONNECTION_ERROR;
}

void Payment::withdrawBalance(User *currentUser, double userAmount) {
    sqlite3 *connection;
    int flag;
    char *errMsg = 0;
    double tax = userAmount * 0.038;
    userAmount += tax;
    ostringstream streamAmount;
    streamAmount << userAmount;
    string amount = streamAmount.str();
    ostringstream streamTax;
    streamTax << tax;
    string taxes = streamTax.str();
    char SQL[300];

    if(currentUser->getBalance() < userAmount)
        throw (char *) NOT_ENOUGH_MONEY;

    flag = sqlite3_open(DATABASE, &connection);
    if(flag!= SQLITE_OK)
        throw (char *) CONNECTION_ERROR;

    sprintf(SQL, "UPDATE USERS set balance = balance-%s WHERE id = %u;", amount.c_str(), currentUser->getId());
    flag = sqlite3_exec(connection, SQL, NULL, 0, &errMsg);
    if(flag!= SQLITE_OK)
        throw (char *) PAYMENT_ERROR;
    currentUser->setBalance(currentUser->getBalance()-userAmount);
    sprintf(SQL, "UPDATE USERS set balance = balance+%s WHERE username = 'admin';", taxes.c_str());
    flag = sqlite3_exec(connection, SQL, NULL, 0, &errMsg);
    if(flag!= SQLITE_OK)
        throw (char *) PAYMENT_ERROR;

    flag = sqlite3_close(connection);
    if(flag != SQLITE_OK)
        throw (char *) CONNECTION_ERROR;
}
