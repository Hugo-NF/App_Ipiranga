
#ifndef PROJETO_FINAL_USER_HPP
#define PROJETO_FINAL_USER_HPP


#include <iostream>
#include <fstream>
#include <list>
#include <vector>
#include <string>
#include <stdlib.h>
#include <sqlite3.h>

using namespace std;

class User{
private: //Private attributes
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

    //Social Media (Friends)
    string friendsString; //ID's of an user's friends, parse this string and do an selection in the database

public:
    User(unsigned int id){
        this->id = id;
    };
    ~User(){};
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

    //Social Media
    void setFriendsString(string);
    string getFriendsString();

    //Database operations

    vector<User *> listUsers(sqlite3 *);

    void createTable(sqlite3 *); //WARNING: This method may throw SQLite exceptions
    void deleteTable(sqlite3 *); //WARNING: This method may throw SQLite exceptions
    void cleanTable(sqlite3 *); //WARNING: This method may throw SQLite exceptions
    void insertOperation(sqlite3 *, User *); //WARNING: This method may throw SQLite exceptions
    void selectionOperation(sqlite3 *, User *); //WARNING: This method may throw SQLite exceptions
    void updateOperation(sqlite3 *, User *); //WARNING: This method may throw SQLite exceptions
    void deleteOperation(sqlite3 *, User *); //WARNING: This method may throw SQLite exceptions

};

static int userCallback(void *, int, char **, char **); //This method is defined outside the class User because it needs to be static
#endif //PROJETO_FINAL_USER_HPP

