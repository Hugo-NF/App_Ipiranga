#include "../include/Account.hpp"
#include "../include/Security.hpp"

User* Account::login(string username, string password) {
    sqlite3 *connection;
    vector<User *> result;
    int flag;
    char SQL[500];
    char *errMsg = 0;

    flag = sqlite3_open(DATABASE, &connection);
    if(flag!=SQLITE_OK)
        throw (char *) CONNECTION_ERROR;


    sprintf(SQL, "SELECT * FROM USERS WHERE username = '%s' AND password = '%s'", username.c_str(), password.c_str());
    flag = sqlite3_exec(connection, SQL, Callbacks::userCallback, &result, &errMsg);
    if(flag != SQLITE_OK)
        throw errMsg;

    if(result.size() > SQLITE_ERROR || result.empty())
        throw (char *) LOGIN_FAILED;

    flag = sqlite3_close(connection);
    if(flag!=SQLITE_OK)
        throw (char *) CONNECTION_ERROR;

    return result[0];
}

void Account::registerUser(vector<string> fields, bool Card, bool Bank){
    sqlite3 *connection;
    int flag;

    User newUser(0);
    newUser.setFirstName(fields[0]);
    newUser.setLastName(fields[1]);
    newUser.setCPF(fields[2]);
    newUser.setRG(fields[3]);
    newUser.setAge(fields[4]);
    newUser.setPhoneNumber(fields[5]);
    newUser.setUsername(fields[6]);
    newUser.setPassword(fields[7]);
    newUser.setEmail(fields[8]);
    newUser.setAddress(fields[9]);
    newUser.setZipCode(fields[10]);
    newUser.setState(fields[11]);
    newUser.setCity(fields[12]);
    newUser.setCardType(fields[13]);
    newUser.setCardNumber(fields[14]);
    newUser.setSecurityCode(fields[15]);
    newUser.setExpirationDate(fields[16]);
    newUser.setCardName(fields[17]);
    newUser.setBank(fields[18]);
    newUser.setAgency(fields[19]);
    newUser.setAccountNumber(fields[20]);
    newUser.registerAccount(Bank);
    newUser.registerCard(Card);
    newUser.setActivation(false);
    newUser.setBalance(0);
    newUser.setRating(0);

    Security::verifyCPF(newUser.getCPF().c_str());
    if(Card)
        Security::verifyCard(&newUser);

    flag = sqlite3_open(DATABASE, &connection);
    if(flag!=SQLITE_OK)
        throw (char *) CONNECTION_ERROR;

    try{
        newUser.insertOperation(connection, &newUser);
        flag = sqlite3_close(connection);
        if(flag!=SQLITE_OK)
            throw (char *) CONNECTION_ERROR;
    }
    catch (char *err){
        flag = sqlite3_close(connection);
        if(flag!=SQLITE_OK)
            throw (char *) CONNECTION_ERROR;
        if(strcmp(err,"UNIQUE constraint failed: USERS.RG")==SQLITE_OK)
            throw (char *) RG_CONSTRAINT;
        else if(strcmp(err,"UNIQUE constraint failed: USERS.CPF")==SQLITE_OK)
            throw (char *) CPF_CONSTRAINT;
        else if(strcmp(err,"UNIQUE constraint failed: USERS.username")==SQLITE_OK)
            throw (char *) USERNAME_CONSTRAINT;
        else if(strcmp(err,"UNIQUE constraint failed: USERS.email")==SQLITE_OK)
            throw (char *) EMAIL_CONSTRAINT;
        else
            throw err;
    }
}

void Account::activateAccount(unsigned int id, bool activation){
    int result;
    char *errMsg = 0;
    char SQL[100];
    sqlite3 *connection;

    int flag = sqlite3_open(DATABASE, &connection);
    if(flag!=SQLITE_OK)
        throw (char *) CONNECTION_ERROR;

    sprintf(SQL, "UPDATE USERS set activation=%d WHERE id=%d;", activation, id);
    result = sqlite3_exec(connection, SQL, Callbacks::userCallback, 0, &errMsg);
    if(result != SQLITE_OK)
        throw (char *) ACTIVATION_ERROR;
    if(!activation){
        sprintf(SQL, "DELETE FROM ADS WHERE sellerId = %u;", id);
        result = sqlite3_exec(connection, SQL, Callbacks::adsCallback, 0, &errMsg);
        if(result != SQLITE_OK)
            throw (char *) ACTIVATION_ERROR;
    }

    flag = sqlite3_close(connection);
    if(flag!=SQLITE_OK)
        throw (char *) CONNECTION_ERROR;
}

void Account::deleteAccount(int id) {
    int result, flag;
    char *errMsg = 0;
    char SQL[50];
    sqlite3 *connection;

    sprintf(SQL, "DELETE FROM USERS WHERE id=%d", id);

    flag = sqlite3_open(DATABASE, &connection);
    if(flag!=SQLITE_OK)
        throw (char *) CONNECTION_ERROR;

    result = sqlite3_exec(connection, SQL, Callbacks::userCallback, 0, &errMsg);
    if(result != SQLITE_OK)
        throw (char *) DELETE_ERROR;

    flag = sqlite3_close(connection);
    if(flag!=SQLITE_OK)
        throw (char *) CONNECTION_ERROR;
}

void Account::updateProfile(vector<string> fields, unsigned int id, bool Card, bool Bank){
    sqlite3 *connection;
    int flag;

    User newUser(id);
    newUser.setFirstName(fields[0]);
    newUser.setLastName(fields[1]);
    newUser.setCPF(fields[2]);
    newUser.setRG(fields[3]);
    newUser.setAge(fields[4]);
    newUser.setPhoneNumber(fields[5]);
    newUser.setUsername(fields[6]);
    newUser.setPassword(fields[7]);
    newUser.setEmail(fields[8]);
    newUser.setAddress(fields[9]);
    newUser.setZipCode(fields[10]);
    newUser.setState(fields[11]);
    newUser.setCity(fields[12]);
    newUser.setCardType(fields[13]);
    newUser.setCardNumber(fields[14]);
    newUser.setSecurityCode(fields[15]);
    newUser.setExpirationDate(fields[16]);
    newUser.setCardName(fields[17]);
    newUser.setBank(fields[18]);
    newUser.setAgency(fields[19]);
    newUser.setAccountNumber(fields[20]);
    newUser.registerAccount(Bank);
    newUser.registerCard(Card);
    newUser.setActivation(true);

    if(Card)
        Security::verifyCard(&newUser);

    flag = sqlite3_open(DATABASE, &connection);
    if(flag!=SQLITE_OK)
        throw (char *) CONNECTION_ERROR;

    try{
        newUser.updateOperation(connection, &newUser);
        flag = sqlite3_close(connection);
        if(flag!=SQLITE_OK)
            throw (char *) CONNECTION_ERROR;
    }
    catch (char *err){
        flag = sqlite3_close(connection);
        if(flag!=SQLITE_OK)
            throw (char *) CONNECTION_ERROR;
        if(strcmp(err,"UNIQUE constraint failed: USERS.RG")==SQLITE_OK)
            throw (char *) RG_CONSTRAINT;
        else if(strcmp(err,"UNIQUE constraint failed: USERS.email")==SQLITE_OK)
            throw (char *) EMAIL_CONSTRAINT;
        else
            throw err;
    }

}