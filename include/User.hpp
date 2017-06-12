
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

private: //Private methods
    //WARNING: The following methods may throw SQLite error messages
    void createTable(sqlite3 *);
    void deleteTable(sqlite3 *);

public: //Public methods
    void cleanTable(sqlite3 *);
    void insertOperation(sqlite3 *, User *); //Must be changed to private
    void updateOperation(sqlite3 *, User *); //Must be changed to private
    void deleteOperation(sqlite3 *, User *); //Must be changed to private
    vector<User *> selectionOperation(sqlite3 *, string, string);

public: //Public Methods
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

};

static int userCallback(void *, int, char **, char **); //This method is defined outside the class User because it needs to be static
#endif //PROJETO_FINAL_USER_HPP

