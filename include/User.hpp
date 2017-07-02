
#ifndef APP_IPIRANGA_USER_HPP
#define APP_IPIRANGA_USER_HPP


#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <cstdio>
#include <stdio.h>
#include <sqlite3.h>
#include "../include/Callbacks.hpp"

#define DATABASE "../database/Ipiranga.db"
#define CONNECTION_ERROR "Unfortunately, we could not connect to the application database"


using namespace std;
/**
 * @abstract Class User
 * Define todos os atributos e metodo inerentes a uma conta de usuário
 * @note: Todas os metodos dessa classe realizam operações atômicas, consistentes, isoladas e duráveis(ACID). Propriedade herdada do sqlite. @endabstract
 */
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



    /**
     * @addindex void deleteTable(sqlite3 *);
     * @warning : O parâmetro sqlite3 * já possuirá uma conexão aberta com a DB.
     * Deleta, de forma condicional, a tabela que representa a classe User
     */
    static void deleteTable(sqlite3 *); //WARNING: The following methods may throw SQLite error messages
    /**
     * @addindex void createTable(sqlite3 *);
     * @warning : O parâmetro sqlite3 * já possuirá uma conexão aberta com a DB.
     * Cria, de forma condicional, uma nova tabela na DB para representar a classe User
     */
    static void createTable(sqlite3 *);

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

    /**
     * @addindex void cleanTable();
     * Limpa todos os registros da classe User.
     */
    static void cleanTable();
    /**
     * @addindex void insertOperation(sqlite3*, User*);
     * Define a interface de inserção com a DB
     * @warning : O parametro sqlite3* já possuirá uma conexão aberta com a DB. Ads* possuirá um objeto com todos os campos setados
     * @arg 1: Objeto da classe sqlite3 que fornecerá a conexão com o DB
     * @arg 2: Objeto da classe User que fornecerá o registro a ser inserido
     */
    void insertOperation(sqlite3 *, User *);
    /**
     * @addindex void updateOperation(sqlite3*, User*);
     * Define a interface de atualização com a DB
     * @warning : O parametro sqlite3* já possuirá uma conexão aberta com a DB. Ads* possuirá um objeto com todos os campos setados
     * @arg 1: Objeto da classe sqlite3 que fornecerá a conexão com o DB
     * @arg 2: Objeto da classe User que fornecerá o registro a ser atualizado
     */
    void updateOperation(sqlite3 *, User *);
    /**
     * @addindex vector<User *> listFriends(unsigned int, bool, string, bool);
     * Metodo que retorna todos os amigos de um User
     * @arg 1: id do usuário atual
     * @arg 2: booleano para indicar a requisição de alguma ordenação
     * @arg 3: string para indicar o critério de ordenação
     * @arg 4: booleano para indicar a sequencia de ordenação
     * @return : conteiner vector da classe User com os amigos do usuario
     */
    static vector<User *> listFriends(unsigned int, bool, string, bool);

};

#endif //APP_IPIRANGA_USER_HPP

