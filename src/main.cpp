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

TEST(SQLite, Connection_Test){
    sqlite3 *db;
    int rc;

    rc = sqlite3_open("../database/Ipiranga.db", &db) ;
    ASSERT_EQ(SQLITE_OK, rc);
    ASSERT_NE(SQLITE_ERROR, rc);

    rc = sqlite3_close(db) ;
    ASSERT_EQ(SQLITE_OK, rc);
    ASSERT_NE(SQLITE_ERROR, rc);
}

/*TEST(SQLite, Creating_USERS_Table){
    sqlite3 *db;
    int rc;
    rc = sqlite3_open("../database/Ipiranga.db", &db) ;
    ASSERT_EQ(SQLITE_OK, rc);
    ASSERT_NE(SQLITE_ERROR, rc);

    User teste(0);
    teste.createTable(db);
    teste.~User();

    rc = sqlite3_close(db) ;
    ASSERT_EQ(SQLITE_OK, rc);
    ASSERT_NE(SQLITE_ERROR, rc);
}
TEST(SQLite, Deleting_USERS_Table){
    sqlite3 *db;
    int rc;
    rc = sqlite3_open("../database/Ipiranga.db", &db) ;
    ASSERT_EQ(SQLITE_OK, rc);
    ASSERT_NE(SQLITE_ERROR, rc);

    User teste(0);
    teste.deleteTable(db);
    teste.~User();

    rc = sqlite3_close(db) ;
    ASSERT_EQ(SQLITE_OK, rc);
    ASSERT_NE(SQLITE_ERROR, rc);
}
*/
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
    sqlite3 *db;
    int rc;
    rc = sqlite3_open("../database/Ipiranga.db", &db) ;
    ASSERT_EQ(SQLITE_OK, rc);
    ASSERT_NE(SQLITE_ERROR, rc);
    teste.setFirstName("Big Moas");
    teste.setLastName("Nascimento");
    teste.setCPF("0568512");
    teste.setRG("2874473");
    teste.setAge("19");
    teste.setPhoneNumber("+556199110155");
    teste.setUsername("Big_123");
    teste.setPassword("123456789GO");
    teste.setEmail("hugo121fonca@gmail.com");
    teste.setActivation(true);
    teste.setFriendsString("1|2|3");
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
        teste.insertOperation(db, &teste);
    }
    catch (int a){
        cout<<"\nNao ta inserindo: "<<a<<" error code";
    }


    rc = sqlite3_close(db) ;
    ASSERT_EQ(SQLITE_OK, rc);
    ASSERT_NE(SQLITE_ERROR, rc);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}