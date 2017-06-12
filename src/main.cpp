#include <iostream>
#include <gtest/gtest.h>
#include <sqlite3.h>
#include "../include/User.hpp"

using namespace std;

TEST(classUser, Gets_Sets){
    User teste (0);

    teste.setFirstName("Moas");
    teste.setLastName("Fonseca");
    string fname = teste.getFirstName();
    string lname = teste.getLastName();
    ASSERT_EQ(0, fname.compare("Moas"));
    ASSERT_EQ(0, lname.compare("Fonseca"));
    ASSERT_EQ(0, teste.getId());
    teste.setRG("2904591");
    ASSERT_EQ("2904591", teste.getRG());

    teste.~User();
}

TEST(SQLite, Cleaning_USERS_Table){
    User teste(0);
    teste.cleanTable();
    teste.~User();
}

TEST(Database_Operation, Update_User){
    User teste(1);
    sqlite3 *db;
    int rc;
    rc = sqlite3_open("../database/Ipiranga.db", &db) ;
    ASSERT_EQ(SQLITE_OK, rc);
    ASSERT_NE(SQLITE_ERROR, rc);
    teste.setFirstName("Big Moas");
    teste.setLastName("Nascimento");
    teste.setCPF("0568502");
    teste.setRG("2874479");
    teste.setAge("19");
    teste.setPhoneNumber("+556199110155");
    teste.setUsername("Big_1234");
    teste.setPassword("123456789GO");
    teste.setEmail("hugonfonseca@gmail.com");
    teste.setActivation(true);
    teste.registerCard(false);
    teste.setCardType("Credit");
    teste.setCardOperator("Visa");
    teste.setCardNumber("4592 8001 8552 9641");
    teste.setCardName("HUGO N. FONSECA");
    teste.setSecurityCode("549");
    teste.setExpirationDate("05/2025");
    teste.registerAccount(false);
    teste.setBank("Itaú");
    teste.setAccountNumber("247896-3");
    teste.setAgency("0479");
    teste.setBalance(2789.63);
    teste.setAddress("QNM 03 CONJ I CS 26");
    teste.setZipCode("72215-039");
    teste.setState("DF");
    teste.setCity("Brazil");

    try{
        teste.updateOperation(db, &teste);
    }
    catch (char *err){
        if(strcmp(err,"UNIQUE constraint failed: USERS.RG")==SQLITE_OK)
            cout<<"RG coincide com um usuario previamente registrado";
        else if(strcmp(err,"UNIQUE constraint failed: USERS.CPF")==SQLITE_OK)
            cout<<"CPF coincide com um usuario previamente registrado";
        else if(strcmp(err,"UNIQUE constraint failed: USERS.username")==SQLITE_OK)
            cout<<"Username coincide com um usuario previamente registrado";
        else if(strcmp(err,"UNIQUE constraint failed: USERS.email")==SQLITE_OK)
            cout<<"Email coincide com um usuario previamente registrado";
        else
            cout<<err;
        teste.~User();
    }


    rc = sqlite3_close(db) ;
    ASSERT_EQ(SQLITE_OK, rc);
    ASSERT_NE(SQLITE_ERROR, rc);
}

TEST(Database_Operation, Delete_User){
    sqlite3 *db;
    int rc;

    rc = sqlite3_open("../database/Ipiranga.db", &db) ;
    ASSERT_EQ(SQLITE_OK, rc);
    ASSERT_NE(SQLITE_ERROR, rc);


    User teste(1);
    teste.deleteOperation(db, &teste);
    teste.~User();

    rc = sqlite3_close(db) ;
    ASSERT_EQ(SQLITE_OK, rc);
    ASSERT_NE(SQLITE_ERROR, rc);
}

TEST(Database_Operation, Selection){
    sqlite3 *db;
    unsigned int i;
    int rc = sqlite3_open("../database/Ipiranga.db", &db) ;
    ASSERT_EQ(SQLITE_OK, rc);
    ASSERT_NE(SQLITE_ERROR, rc);

    vector<User *> query;
    User teste(0);
    query = teste.selectionOperation(db, "age", "18");
    for(i=0; i<query.size(); i++){
        cout<<query[i]->getCPF()<<"\n";
        delete(query[i]);
    }
    rc = sqlite3_close(db) ;
    ASSERT_EQ(SQLITE_OK, rc);
    ASSERT_NE(SQLITE_ERROR, rc);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}