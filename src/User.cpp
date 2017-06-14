#include "../include/User.hpp"

using namespace std;

//------------------------------------Get and Set Methods-----------------------------------------

unsigned int User::getId(){ //Attention: The id is set in the class constructor
    return this->id;
}

//Personal
void User::setFirstName(string firstName){
    this->firstName = firstName;
}

string User::getFirstName(){
    return this->firstName;
}

void User::setLastName(string lastName){
    this->lastName = lastName;
}

string User::getLastName(){
    return this->lastName;
}

void User::setCPF(string CPF) {
    this->CPF = CPF;
}

string User::getCPF() {
    return this->CPF;
}

void User::setRG(string RG) {
    this->RG = RG;
}

string User::getRG() {
    return this->RG;
}

void User::setAge(string age) {
    this->age = age;
}

string User::getAge() {
    return this->age;
}

void User::setPhoneNumber(string phoneNumber) {
    this->phoneNumber = phoneNumber;
}

string User::getPhoneNumber() {
    return this->phoneNumber;
}

//Access
void User::setUsername(string username) {
    this->username = username;
}

string User::getUsername() {
    return this->username;
}

void User::setPassword(string password) {
    this->password = password;
}

string User::getPassword() {
    return this->password;
}

void User::setEmail(string email){
    this->email = email;
}

string User::getEmail() {
    return this->email;
}

void User::setActivation(bool status){
    this->activation = status;
}

bool User::isActivated() {
    return this->activation;
}

//Payment

void User::registerCard(bool status) {
    this->hasCard = status;
}

bool User::cardRegistered() {
    return this->hasCard;
}

void User::setCardType(string cardCode) {
    this->type = cardCode;
}

string User::getCardType() {
    return this->type;
}

void User::setCardOperator(string operatorCode) {
    this->cardOperator = operatorCode;
}

string User::getCardOperator() {
    return this->cardOperator;
}

void User::setCardNumber(string cardNumber) {
    this->cardNumber = cardNumber;
}

string User::getCardNumber() {
    return this->cardNumber;
}

void User::setCardName(string name){
    this->cardName = name;
}

string User::getCardName(){
    return this->cardName;
}

void User::setSecurityCode(string securityCode){
    this->securityCode = securityCode;
}

string User::getSecurityCode() {
    return this->securityCode;
}

void User::setExpirationDate(string date) {
    this->expirationDate = date;
}

string User::getExpirationDate() {
    return this->expirationDate;
}

//Financial

void User::registerAccount(bool status) {
    this->hasAccount = status;
}

bool User::accountRegistered() {
    return this->hasAccount;
}

void User::setBank(string bankCode) {
    this->bank = bankCode;
}

string User::getBank() {
    return this->bank;
}

void User::setAccountNumber(string accountNumber) {
    this->accountNumber = accountNumber;
}

string User::getAccountNumber() {
    return this->accountNumber;
}

void User::setAgency(string agency){
    this->agency = agency;
}

string User::getAgency() {
    return this->agency;
}

//Billing

void User::setAddress(string address) {
    this->address = address;
}

string User::getAddress() {
    return this->address;
}

void User::setZipCode(string zipCode){
    this->zipCode =zipCode;
}

string User::getZipCode() {
    return this->zipCode;
}

void User::setState(string stateAbbv) {
    this->state = stateAbbv;
}

string User::getState() {
    return this->state;
}

void User::setCity(string city) {
    this->city = city;
}

string User::getCity() {
    return this->city;
}

//App balance
void User::setBalance(double balance) {
    this->balance = balance;
}

double User::getBalance() {
    return this->balance;
}

//----------------------------------Methods for manipulating SQLite-------------------------------

//Database Setup Operations

void User::createTable(sqlite3 *connection) {
    int result;
    char *errMsg = 0;
    string SQL = "CREATE TABLE IF NOT EXISTS USERS ("\
            "  `id`             INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,"\
            "  `firstName`      VARCHAR(20)                       NOT NULL,"\
            "  `lastName`       VARCHAR(20)                       NOT NULL,"\
            "  `CPF`            VARCHAR(11) UNIQUE                NOT NULL,"\
            "  `RG`             VARCHAR(11) UNIQUE                NOT NULL,"\
            "  `age`            VARCHAR(3)                        NOT NULL,"\
            "  `phoneNumber`    VARCHAR(15)                       NOT NULL,"\
            "  `username`       VARCHAR(20) UNIQUE                NOT NULL,"\
            "  `password`       VARCHAR(30)                       NOT NULL,"\
            "  `email`          VARCHAR(45) UNIQUE                NOT NULL,"\
            "  `activation`     UNSIGNED INT(1)                   NOT NULL,"\
            "  `hasCard`        UNSIGNED ZEROFILL INT(1)          NOT NULL,"\
            "  `type`           VARCHAR(10)                       NOT NULL,"\
            "  `cardOperator`   VARCHAR(20)                       NOT NULL,"\
            "  `cardNumber`     VARCHAR(20)                       NOT NULL,"\
            "  `cardName`       VARCHAR(30)                       NOT NULL,"\
            "  `securityCode`   VARCHAR(5)                        NOT NULL,"\
            "  `expirationDate` VARCHAR(10)                       NOT NULL,"\
            "  `hasAccount`     UNSIGNED ZEROFILL INT(1)          NOT NULL,"\
            "  `bank`           VARCHAR(30)                       NOT NULL,"\
            "  `accountNumber`  VARCHAR(20)                       NOT NULL,"\
            "  `agency`         VARCHAR(10)                       NOT NULL,"\
            "  `balance`        VARCHAR(15)                       NOT NULL,"\
            "  `address`        VARCHAR(100)                      NOT NULL,"\
            "  `zipCode`        VARCHAR(10)                       NOT NULL,"\
            "  `state`          VARCHAR(2)                        NOT NULL,"\
            "  `city`           VARCHAR(20)                       NOT NULL);";
    result = sqlite3_exec(connection, SQL.c_str(), userCallback, 0, &errMsg);
    if(result != SQLITE_OK)
        throw errMsg;
}

void User::deleteTable(sqlite3 *connection){
    int result;
    char *errMsg = 0;
    string SQL = "DROP TABLE IF EXISTS USERS";
    result = sqlite3_exec(connection, SQL.c_str(), userCallback, 0, &errMsg);
    if(result != SQLITE_OK)
        throw errMsg;
}

void User::cleanTable() {
    sqlite3 *connection;
    int flag = sqlite3_open(DATABASE, &connection);
    if(flag!= SQLITE_OK)
        throw (char *) CONNECTION_ERROR;
    this->deleteTable(connection);
    this->createTable(connection);
    flag = sqlite3_close(connection);
    if(flag != SQLITE_OK)
        throw (char *) CONNECTION_ERROR;
}

//Database CRUD Operations

void User::insertOperation(sqlite3 *connection, User *user) {
    int result;
    char *errMsg = 0;
    char SQL[1500];
    sprintf(SQL, "INSERT INTO USERS ("\
    "firstName, lastName, CPF, RG, age, phoneNumber, username, password, email, activation,"\
    "hasCard, type, cardOperator, cardNumber, cardName, securityCode, expirationDate,"\
    "hasAccount, bank, accountNumber, agency, balance, address, zipCode, state, city)"\
    " VALUES('%s','%s','%s','%s','%s','%s','%s','%s','%s',%d,%d,'%s','%s','%s','%s','%s','%s',%d,"\
    "'%s','%s','%s','%lf','%s','%s','%s','%s');",\
     user->getFirstName().c_str(), user->getLastName().c_str(), user->getCPF().c_str(),\
     user->getRG().c_str(), user->getAge().c_str(), user->getPhoneNumber().c_str(), user->getUsername().c_str(),\
     user->getPassword().c_str(), user->getEmail().c_str(), user->isActivated(),\
     user->cardRegistered(), user->getCardType().c_str(), user->getCardOperator().c_str(),user->getCardNumber().c_str(),user->getCardName().c_str(),\
     user->getSecurityCode().c_str(), user->getExpirationDate().c_str(), user->accountRegistered(),\
     user->getBank().c_str(), user->getAccountNumber().c_str(), user->getAgency().c_str(),user->getBalance(),\
     user->getAddress().c_str(), user->getZipCode().c_str(), user->getState().c_str(), user->getCity().c_str());
    result = sqlite3_exec(connection, SQL, userCallback, 0, &errMsg);
    if(result != SQLITE_OK)
        throw errMsg;
}

void User::updateOperation(sqlite3 *connection, User *user) {
    int result;
    char *errMsg = 0;
    char SQL[1500];
    sprintf(SQL, "UPDATE USERS set firstName='%s', lastName='%s', CPF='%s', RG='%s', age='%s', phoneNumber='%s',"\
    "username='%s', password='%s', email='%s', activation=%d, hasCard=%d, type='%s', cardOperator='%s',"\
    "cardNumber='%s', cardName='%s', securityCode='%s', expirationDate='%s', hasAccount=%d, bank='%s', accountNumber='%s',"\
    "agency='%s', balance='%lf', address='%s', zipCode='%s', state='%s', city='%s' WHERE id=%d;", user->getFirstName().c_str(), user->getLastName().c_str(), user->getCPF().c_str(),\
     user->getRG().c_str(), user->getAge().c_str(), user->getPhoneNumber().c_str(), user->getUsername().c_str(),\
     user->getPassword().c_str(), user->getEmail().c_str(), user->isActivated(),\
     user->cardRegistered(), user->getCardType().c_str(), user->getCardOperator().c_str(),user->getCardNumber().c_str(),user->getCardName().c_str(),\
     user->getSecurityCode().c_str(), user->getExpirationDate().c_str(), user->accountRegistered(),\
     user->getBank().c_str(), user->getAccountNumber().c_str(), user->getAgency().c_str(),user->getBalance(),\
     user->getAddress().c_str(), user->getZipCode().c_str(), user->getState().c_str(), user->getCity().c_str(), user->getId());
    result = sqlite3_exec(connection, SQL, userCallback, 0, &errMsg);
    if(result != SQLITE_OK)
        throw errMsg;
}

void User::deleteOperation(sqlite3 *connection, User *user) {
    int result;
    char *errMsg = 0;
    char SQL[100];
    sprintf(SQL, "DELETE FROM USERS WHERE id=%d", user->getId());

    result = sqlite3_exec(connection, SQL, userCallback, 0, &errMsg);
    if(result != SQLITE_OK)
        throw errMsg;
}

vector<User *> User::selectionOperation(sqlite3 *connection, string matchingCriteria, string keyword){
    vector<User *> result;
    int flag;
    char *errMsg = 0;
    char SQL[100];
    if(matchingCriteria.compare("ALL") == SQLITE_OK || keyword.compare("ALL") == SQLITE_OK){
        sprintf(SQL, "SELECT * FROM USERS");
    }
    else{
        sprintf(SQL, "SELECT * FROM USERS WHERE %s=%s", matchingCriteria.c_str(), keyword.c_str());
    }
    flag = sqlite3_exec(connection, SQL, userCallback, &result, &errMsg);
    if(flag != SQLITE_OK)
        throw errMsg;
    return result;
}

vector<User *> User::searchBy(vector<string> criteria, vector<string> keywords) {
    unsigned long argcCriteria = criteria.size();
    unsigned long argcKeywords = keywords.size();
    unsigned int i;
    char query[100];
    char SQL[5000] = "SELECT * FROM USERS WHERE ";
    vector<User *> result;
    char *errMsg = 0;
    sqlite3 *connection;

    if(argcCriteria != argcKeywords || argcCriteria == SQLITE_OK || argcKeywords == SQLITE_OK)
        throw (char *) QUERY_INVALID;

    int flag = sqlite3_open(DATABASE, &connection);
    if(flag != SQLITE_OK)
        throw (char *) CONNECTION_ERROR;

    for(i=0; i<argcCriteria-1; i++){
        sprintf(query, "%s = '%s' AND ", criteria[i].c_str(), keywords[i].c_str());
        strcat(SQL, query);
        memset(query, 0, 100);
    }
    sprintf(query, "%s = '%s';", criteria[i].c_str(), keywords[i].c_str());
    strcat(SQL, query);
    memset(query, 0, 100);
    flag = sqlite3_exec(connection, SQL, userCallback, &result, &errMsg);

    if(flag!=SQLITE_OK)
        throw errMsg;

    flag = sqlite3_close(connection);
    if(flag != SQLITE_OK)
        throw (char *) CONNECTION_ERROR;

    return result;
}

void User::registerUser(vector<string> fields, bool Card, bool Bank){
    sqlite3 *connection;
    int flag = sqlite3_open(DATABASE, &connection);
    if(flag!=SQLITE_OK)
        throw (char *) CONNECTION_ERROR;

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
    newUser.setBalance(0.0);
    newUser.setCardOperator("Visa"); //WARNING: Call security module
    try{
        newUser.insertOperation(connection, &newUser);
        //newUser.~User();
        flag = sqlite3_close(connection);
        if(flag!=SQLITE_OK)
            throw (char *) CONNECTION_ERROR;
    }
    catch (char *err){
            //newUser.~User();
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

User* User::login(string username, string password) {
    vector<string> criteria;
    criteria.resize(2);
    vector<string> keywords;
    keywords.resize(2);
    vector<User *> result;
    criteria[0] = "username";
    criteria[1] = "password";
    keywords[0] = username;
    keywords[1] = password;
    result = searchBy(criteria, keywords);
    //delete(&criteria);
    //delete(&keywords);
    if(result.size() != 1){
        //result.~vector();
        throw (char *)LOGIN_FAILED;
    }
    return result[0];
}

void User::instantiateUser(User *currentUser, User *data){ //Dead function until now
    currentUser = new User(data->getId());
    currentUser->setFirstName(data->getFirstName());
    currentUser->setLastName(data->getLastName());
    currentUser->setCPF(data->getCPF());
    currentUser->setRG(data->getRG());
    currentUser->setAge(data->getAge());
    currentUser->setPhoneNumber(data->getPhoneNumber());
    currentUser->setUsername(data->getUsername());
    currentUser->setPassword(data->getPassword());
    currentUser->setEmail(data->getEmail());
    currentUser->setActivation(data->isActivated());
    currentUser->registerCard(data->cardRegistered());
    currentUser->setCardType(data->getCardType());
    currentUser->setCardOperator(data->getCardOperator());
    currentUser->setCardNumber(data->getCardNumber());
    currentUser->setCardName(data->getCardName());
    currentUser->setSecurityCode(data->getSecurityCode());
    currentUser->setExpirationDate(data->getExpirationDate());
    currentUser->registerAccount(data->accountRegistered());
    currentUser->setBank(data->getBank());
    currentUser->setAccountNumber(data->getAccountNumber());
    currentUser->setAgency(data->getAgency());
    currentUser->setBalance(data->getBalance());
    currentUser->setAddress(data->getAddress());
    currentUser->setZipCode(data->getZipCode());
    currentUser->setState(data->getState());
    currentUser->setCity(data->getCity());
}

void User::logout(User *currentUser) {
    delete(currentUser);
}

static int userCallback(void *ptr, int argc, char **argv, char **colNames) {
    vector<User *>* result = (vector<User *>*) ptr;
    User *currentUser = new User((atoi(argv[0])));
    currentUser->setFirstName(argv[1]);
    currentUser->setLastName(argv[2]);
    currentUser->setCPF(argv[3]);
    currentUser->setRG(argv[4]);
    currentUser->setAge(argv[5]);
    currentUser->setPhoneNumber(argv[6]);
    currentUser->setUsername(argv[7]);
    currentUser->setPassword(argv[8]);
    currentUser->setEmail(argv[9]);
    currentUser->setActivation(atoi(argv[10]));
    currentUser->registerCard(atoi(argv[11]));
    currentUser->setCardType(argv[12]);
    currentUser->setCardOperator(argv[13]);
    currentUser->setCardNumber(argv[14]);
    currentUser->setCardName(argv[15]);
    currentUser->setSecurityCode(argv[16]);
    currentUser->setExpirationDate(argv[17]);
    currentUser->registerAccount(atoi(argv[18]));
    currentUser->setBank(argv[19]);
    currentUser->setAccountNumber(argv[20]);
    currentUser->setAgency(argv[21]);
    currentUser->setBalance(atof(argv[22]));
    currentUser->setAddress(argv[23]);
    currentUser->setZipCode(argv[24]);
    currentUser->setState(argv[25]);
    currentUser->setCity(argv[26]);

    result->push_back(currentUser);
    return 0;
}
