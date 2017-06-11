#include <iostream>
#include <gtest/gtest.h>
#include <sqlite3.h>
#include "../include/User.hpp"

using namespace std;

TEST(classUser, Construct_Destruct){
    User teste(0);
    teste.~User();
}

TEST(classUser, Gets_Sets){
    User teste(0);

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

TEST(SQLite, Connect_Config_Disconnect){
    sqlite3 *DB;
    User gambiarra_para_testar(0);
    char *errMsg = 0;
    int result = sqlite3_open("../database/Ipiranga.db", &DB);
    ASSERT_NE(1, result);
    ASSERT_EQ(0, result);
    string SQL = "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY) "  \
         "VALUES (1, 'Paul', 32, 'California', 20000.00 ) ; " \
         "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY) "  \
         "VALUES (2, 'Allen', 25, 'Texas', 15000.00 ) ; "     \
         "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY) " \
         "VALUES (3, 'Teddy', 23, 'Norway', 20000.00 ) ;" \
         "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY) " \
         "VALUES (4, 'Mark', 25, 'Rich-Mond ', 65000.00 ) ;"; //String meramente ilustrativa

    result = sqlite3_exec(DB, SQL.c_str(), gambiarra_para_testar.callback, 0, &errMsg);
    ASSERT_EQ(SQLITE_OK ,result);
    result = sqlite3_close(DB);
    ASSERT_NE(1, result);
    ASSERT_EQ(0, result);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}