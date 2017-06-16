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

void User::setRating(double rating) {
    this->rating = rating;
}

double User::getRating() {
    return this->rating;
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
            "  `city`           VARCHAR(20)                       NOT NULL,"\
            "  `rating`         DOUBLE                            NOT NULL);";
    result = sqlite3_exec(connection, SQL.c_str(), Callbacks::userCallback, 0, &errMsg);
    if(result != SQLITE_OK)
        throw errMsg;
}

void User::deleteTable(sqlite3 *connection){
    int result;
    char *errMsg = 0;
    string SQL = "DROP TABLE IF EXISTS USERS";
    result = sqlite3_exec(connection, SQL.c_str(), Callbacks::userCallback, 0, &errMsg);
    if(result != SQLITE_OK)
        throw errMsg;
}

void User::cleanTable() {
    sqlite3 *connection;
    int flag = sqlite3_open(DATABASE, &connection);
    if(flag!= SQLITE_OK)
        throw (char *) CONNECTION_ERROR;
    User::deleteTable(connection);
    User::createTable(connection);
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
    "hasAccount, bank, accountNumber, agency, balance, address, zipCode, state, city, rating)"\
    " VALUES('%s','%s','%s','%s','%s','%s','%s','%s','%s',%d,%d,'%s','%s','%s','%s','%s','%s',%d,"\
    "'%s','%s','%s','%lf','%s','%s','%s','%s', %lf);",\
     user->getFirstName().c_str(), user->getLastName().c_str(), user->getCPF().c_str(),\
     user->getRG().c_str(), user->getAge().c_str(), user->getPhoneNumber().c_str(), user->getUsername().c_str(),\
     user->getPassword().c_str(), user->getEmail().c_str(), user->isActivated(),\
     user->cardRegistered(), user->getCardType().c_str(), user->getCardOperator().c_str(),user->getCardNumber().c_str(),user->getCardName().c_str(),\
     user->getSecurityCode().c_str(), user->getExpirationDate().c_str(), user->accountRegistered(),\
     user->getBank().c_str(), user->getAccountNumber().c_str(), user->getAgency().c_str(),user->getBalance(),\
     user->getAddress().c_str(), user->getZipCode().c_str(), user->getState().c_str(), user->getCity().c_str(), user->getRating());
    result = sqlite3_exec(connection, SQL, Callbacks::userCallback, 0, &errMsg);
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
    "agency='%s', address='%s', zipCode='%s', state='%s', city='%s' WHERE id=%u;", user->getFirstName().c_str(), user->getLastName().c_str(), user->getCPF().c_str(),\
     user->getRG().c_str(), user->getAge().c_str(), user->getPhoneNumber().c_str(), user->getUsername().c_str(),\
     user->getPassword().c_str(), user->getEmail().c_str(), user->isActivated(),\
     user->cardRegistered(), user->getCardType().c_str(), user->getCardOperator().c_str(),user->getCardNumber().c_str(),user->getCardName().c_str(),\
     user->getSecurityCode().c_str(), user->getExpirationDate().c_str(), user->accountRegistered(),\
     user->getBank().c_str(), user->getAccountNumber().c_str(), user->getAgency().c_str(),\
     user->getAddress().c_str(), user->getZipCode().c_str(), user->getState().c_str(), user->getCity().c_str(), user->getId());
    result = sqlite3_exec(connection, SQL, Callbacks::userCallback, 0, &errMsg);
    if(result != SQLITE_OK)
        throw errMsg;
}

