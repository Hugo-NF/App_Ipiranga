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
    teste.setRG(2904591);
    ASSERT_EQ(2904591, teste.getRG());

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

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}