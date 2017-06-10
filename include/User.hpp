
#ifndef PROJETO_FINAL_USER_HPP
#define PROJETO_FINAL_USER_HPP


#include <iostream>
#include <fstream>
#include <list>

using namespace std;

class User{
private: //Private attributes
    //Personal
    string firstName; //Real name
    string lastName;
    unsigned long CPF;
    unsigned long RG;
    unsigned int age;
    string phoneNumber;

    //Access
    unsigned int id;
    string username;
    string password;
    string email;
    bool activation;

    //Card information
    bool hasCard;
    unsigned int type;
    unsigned int cardOperator;
    string cardNumber;
    string cardName;
    unsigned int securityCode;
    string expirationDate;

    //Billing information
    string address;
    string zipCode;
    string state;
    string country;

    //Banking information
    bool hasAccount;
    unsigned int bank;
    unsigned long accountNumber;
    unsigned long agency;

    //App balance
    float balance;

    //Friends
    string friendsStr;
    list<int> friends;

public:
    User(unsigned int id){ //Default constructor
        this->id = id;
    }
    virtual ~User(){  //Default destructor
        friends.~list();
    };
    //Get/Set Operations

    //Personal
    void setFirstName(string);
    string getFirstName();
    void setLastName(string);
    string getLastName();
    void setCPF(unsigned long);
    unsigned long getCPF();
    void setRG(unsigned long);
    unsigned long getRG();
    void setAge(unsigned int);
    unsigned int getAge();
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
    void setCardType(unsigned int);
    unsigned int getCardType();
    void setCardOperator(unsigned int);
    unsigned int getCardOperator();
    void setCardNumber(string);
    string getCardNumber();
    void setCardName(string);
    string getCardName();
    void setSecurityCode(unsigned int);
    unsigned int getSecurityCode();
    void setExpirationDate(string);
    string getExpirationDate();

    //Financial
    void registerAccount(bool);
    bool accountRegistered();
    void setBank(unsigned int);
    unsigned int getBank();
    void setAccountNumber(unsigned long);
    unsigned long getAccountNumber();
    void setAgency(unsigned long);
    unsigned long getAgency();

    //Billing
    void setAddress(string);
    string getAddress();
    void setZipCode(string);
    string getZipCode();
    void setState(string);
    string getState();
    void setCountry(string);
    string getCountry();

};
#endif //PROJETO_FINAL_USER_HPP

