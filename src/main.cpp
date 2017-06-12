#include <iostream>
#include <gtest/gtest.h>
#include <sqlite3.h>
#include "../include/User.hpp"

using namespace std;

TEST(classUser, Construct_Destruct){
    User teste (0);
    teste.~User();
}

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
    sqlite3 *db;
    int rc;
    rc = sqlite3_open("../database/Ipiranga.db", &db) ;
    ASSERT_EQ(SQLITE_OK, rc);
    ASSERT_NE(SQLITE_ERROR, rc);

    User teste(0);
    teste.cleanTable(db);
    teste.~User();

    rc = sqlite3_close(db) ;
    ASSERT_EQ(SQLITE_OK, rc);
    ASSERT_NE(SQLITE_ERROR, rc);

}

TEST(Database_Operation, User_Insertion){
    User teste(614);
    User teste1(613);
    sqlite3 *db;
    int rc;
    rc = sqlite3_open("../database/Ipiranga.db", &db) ;
    ASSERT_EQ(SQLITE_OK, rc);
    ASSERT_NE(SQLITE_ERROR, rc);
    teste.setFirstName("Big Moas");
    teste.setLastName("Nascimento");
    teste.setCPF("0568502");
    teste.setRG("287447");
    teste.setAge("19");
    teste.setPhoneNumber("+556199110155");
    teste.setUsername("Big_1234");
    teste.setPassword("123456789GO");
    teste.setEmail("hugo121fonsca@gmail.com");
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
    teste1.setFirstName("Big Moas");
    teste1.setLastName("Nascimento");
    teste1.setCPF("05685177102");
    teste1.setRG("2874747");
    teste1.setAge("19");
    teste1.setPhoneNumber("+556199110155");
    teste1.setUsername("BigMoas_1234");
    teste1.setPassword("123456789GO");
    teste1.setEmail("hugonfoca@gmail.com");
    teste1.setActivation(true);
    teste1.registerCard(false);
    teste1.setCardType("Credit");
    teste1.setCardOperator("Visa");
    teste1.setCardNumber("4592 8001 8552 9641");
    teste1.setCardName("HUGO N. FONSECA");
    teste1.setSecurityCode("549");
    teste1.setExpirationDate("05/2025");
    teste1.registerAccount(false);
    teste1.setBank("Itaú");
    teste1.setAccountNumber("247896-3");
    teste1.setAgency("0479");
    teste1.setBalance(2789.63);
    teste1.setAddress("QNM 03 CONJ I CS 26");
    teste1.setZipCode("72215-039");
    teste1.setState("DF");
    teste1.setCity("Brazil");

    try{
        teste.insertOperation(db, &teste);
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
    try{
        teste.insertOperation(db, &teste1);
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
        teste1.~User();
    }


    rc = sqlite3_close(db) ;
    ASSERT_EQ(SQLITE_OK, rc);
    ASSERT_NE(SQLITE_ERROR, rc);
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
/*
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
}*/

TEST(Database_Operation, Selection){
    sqlite3 *db;
    unsigned int i;
    int rc = sqlite3_open("../database/Ipiranga.db", &db) ;
    ASSERT_EQ(SQLITE_OK, rc);
    ASSERT_NE(SQLITE_ERROR, rc);

    vector<User *> query;
    User teste(0);
    query = teste.selectionOperation(db, "age", "19");
    for(i=0; i<query.size(); i++){
        cout<<query[i]->getCPF()<<"\n";
        delete(query[i]);
    }
    vector<User *> query1;

    rc = sqlite3_close(db) ;
    ASSERT_EQ(SQLITE_OK, rc);
    ASSERT_NE(SQLITE_ERROR, rc);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}