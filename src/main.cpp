#include <iostream>
#include "../include/User.hpp"
#include <gtest/gtest.h>

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


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}