#include "../include/User.hpp"

unsigned int User::getId(){
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

void User::setCPF(unsigned long CPF) {
    this->CPF = CPF;
}

unsigned long User::getCPF() {
    return this->CPF;
}

void User::setRG(unsigned long RG) {
    this->RG = RG;
}

unsigned long User::getRG() {
    return this->RG;
}

void User::setAge(unsigned int age) {
    this->age = age;
}

unsigned int User::getAge() {
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

void User::setCardType(unsigned int cardCode) {
    this->type = cardCode;
}

unsigned int User::getCardType() {
    return this->type;
}

void User::setCardOperator(unsigned int operatorCode) {
    this->cardOperator = operatorCode;
}

unsigned int User::getCardOperator() {
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

void User::setSecurityCode(unsigned int securityCode){
    this->securityCode = securityCode;
}

unsigned int User::getSecurityCode() {
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

void User::setBank(unsigned int bankCode) {
    this->bank = bankCode;
}

unsigned int User::getBank() {
    return this->bank;
}

void User::setAccountNumber(unsigned long accountNumber) {
    this->accountNumber = accountNumber;
}

unsigned long User::getAccountNumber() {
    return this->accountNumber;
}

void User::setAgency(unsigned long agency){
    this->agency = agency;
}

unsigned long User::getAgency() {
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

void User::setCountry(string country) {
    this->country = country;
}

string User::getCountry() {
    return this->country;
}


