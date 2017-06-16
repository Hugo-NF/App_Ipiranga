
#ifndef APP_IPIRANGA_USER_HPP
#define APP_IPIRANGA_USER_HPP


#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <cstdio>
#include <stdio.h>
#include <sqlite3.h>
#include "../include/Callbacks.hpp"

#define DATABASE "../database/Ipiranga.db"
#define CONNECTION_ERROR "Could not connect to the application database"


using namespace std;

class User {
    //Class attributes
private:
    //Personal
    string firstName; //Real name
    string lastName;
    string CPF;
    string RG;
    string age;
    string phoneNumber;

    //Access
    unsigned int id;
    string username;
    string password;
    string email;
    bool activation;

    //Card information
    bool hasCard;
    string type;
    string cardOperator;
    string cardNumber;
    string cardName;
    string securityCode;
    string expirationDate;

    //Billing information
    string address;
    string zipCode;
    string state;
    string city;

    //Banking information
    bool hasAccount;
    string bank;
    string accountNumber;
    string agency;

    //App balance
    double balance;
    //Average Rating
    double rating;

    //Class methods
    static void deleteTable(sqlite3 *); //WARNING: The following methods may throw SQLite error messages
    static void createTable(sqlite3 *);

public:
    static void cleanTable();
    void insertOperation(sqlite3 *, User *);
    void updateOperation(sqlite3 *, User *);

public: //Public Methods
    User(unsigned int id){
        this->id = id;
    } //Constructor
    User(){}
    ~User(){} //Destructor

    //Get/Set Operations
    //Personal
    void setFirstName(string);
    string getFirstName();
    void setLastName(string);
    string getLastName();
    void setCPF(string);
    string getCPF();
    void setRG(string);
    string getRG();
    void setAge(string);
    string getAge();
    void setPhoneNumber(string);
    string getPhoneNumber();

    //Access
    unsigned int getId();
    void setUsername(string);
    string getUsername();
    void setPassword(string);
    string getPassword();
    void setEmail(string);
    string getEmail();
    void setActivation(bool);
    bool isActivated();

    //Payment
    void registerCard(bool);
    bool cardRegistered();
    void setCardType(string);
    string getCardType();
    void setCardOperator(string);
    string getCardOperator();
    void setCardNumber(string);
    string getCardNumber();
    void setCardName(string);
    string getCardName();
    void setSecurityCode(string);
    string getSecurityCode();
    void setExpirationDate(string);
    string getExpirationDate();

    //Financial
    void registerAccount(bool);
    bool accountRegistered();
    void setBank(string);
    string getBank();
    void setAccountNumber(string);
    string getAccountNumber();
    void setAgency(string);
    string getAgency();

    //Billing
    void setAddress(string);
    string getAddress();
    void setZipCode(string);
    string getZipCode();
    void setState(string);
    string getState();
    void setCity(string);
    string getCity();

    //App balance
    void setBalance(double);
    double getBalance();
    //Average rating
    void setRating(double);
    double getRating();
};

#endif //APP_IPIRANGA_USER_HPP

