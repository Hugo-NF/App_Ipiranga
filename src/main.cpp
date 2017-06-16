#include <iostream>
#include <gtest/gtest.h>
#include "../include/User.hpp"
#include "../include/Account.hpp"
#include "../include/Security.hpp"

using namespace std;
/*
TEST(Account_Manipulation, Register){
    vector<string> fields (21);
    fields[0] = "Big Moai";
    fields[1] = "Nascimento";
    fields[2] = "17970148387";
    fields[3] = "2874";
    fields[4] = "19";
    fields[5] = "+556199110155";
    fields[6] = "Big_Moas22";
    fields[7] = "123456789GO";
    fields[8] = "hugofonseca5@gmail.com";
    fields[9] = "QNM 03 CONJ I CS 26";
    fields[10] = "72215-039";
    fields[11] = "DF";
    fields[12] = "Brasília";
    fields[13] = "Credit";
    fields[14] = "4592800185529641";
    fields[15] = "549";
    fields[16] = "05/2025";
    fields[17] = "HUGO N. FONSECA";
    fields[18] = "Itaú";
    fields[19] = "0479";
    fields[20] = "247896-3";

    try{
        Account::registerUser(fields, true, true);
    } catch (char *errors){
        cout<<errors<<endl;
    }

    fields[0] = "Big Moai";
    fields[1] = "Nascimento";
    fields[2] = "14308253918";
    fields[3] = "2872319";
    fields[4] = "19";
    fields[5] = "+556199110155";
    fields[6] = "Big_Moas15";
    fields[7] = "123456789GO";
    fields[8] = "hugofonseca2@gmail.com";
    fields[9] = "QNM 03 CONJ I CS 26";
    fields[10] = "72215-039";
    fields[11] = "DF";
    fields[12] = "Brasília";
    fields[13] = "Credit";
    fields[14] = "9858001855296411";
    fields[15] = "549";
    fields[16] = "05/2025";
    fields[17] = "HUGO N. FONSECA";
    fields[18] = "Itaú";
    fields[19] = "0479";
    fields[20] = "247896-3";

    try{
        Account::registerUser(fields, true, true);
    } catch (char *errors){
        cout<<errors<<endl;
    }
}
*/
/*
TEST(Security_Module, CPF_autentication){
    string CPF = "25725661337";
    bool validation = true;
    try{
        Security::verifyCPF(CPF.c_str());
    }
    catch(char *error) {
        validation = false;
    }
    ASSERT_EQ(validation, false);
}

TEST(Security_Module, Card_autentication){
    User teste(0);
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
    teste.registerCard(true);
    teste.setCardType("Credit");
    teste.setCardNumber("5005800185529641");
    teste.setCardName("HUGO N. FONSECA");
    teste.setSecurityCode("549");
    teste.setExpirationDate("05/2025");
    teste.registerAccount(true);
    teste.setBank("Itaú");
    teste.setAccountNumber("247896-3");
    teste.setAgency("0479");
    teste.setBalance(2789.63);
    teste.setAddress("QNM 03 CONJ I CS 26");
    teste.setZipCode("72215-039");
    teste.setState("DF");
    teste.setCity("Brasilia");

    try {
        Security::verifyCard(&teste);
    }
    catch (char *errors){
        cout<<errors;
    }
    ASSERT_EQ(teste.getCardOperator(), "MasterCard");

}
*/

TEST(Account_Manipulation, Account_Login) {
    try {
        User *usuario_logado = Account::login("Viado", "123456789GO");
        ASSERT_EQ(true, usuario_logado->isActivated());
        ASSERT_EQ(0.0, usuario_logado->getRating());
        ASSERT_EQ(0.0, usuario_logado->getBalance());
    }
    catch (char *error){
        cout<<error<<endl;
    }
}
/*
TEST(Account_Manipulation, Account_Deletion){
    Account::deleteAccount(2);
    try{
        User *usuario_logado = Account::login("Big_Moas15", "123456789GO");
    }
    catch (char *error){
        cout<<error<<endl;
    }
}

TEST(Account_Manipulation, Updating_Profile){
    User *usuario_logado;
    vector<string> fields(21);
    fields[0] = "Sr Frodo";
    fields[1] = "Senhor dos Aneis";
    fields[2] = "14308253918";
    fields[3] = "2872319";
    fields[4] = "19";
    fields[5] = "+589199110155";
    fields[6] = "Viado";
    fields[7] = "123456789GO";
    fields[8] = "hhubtyonseca2@gmail.com";
    fields[9] = "QNM 03 CONJ I CS 26";
    fields[10] = "72215-039";
    fields[11] = "DF";
    fields[12] = "Brasília";
    fields[13] = "Credit";
    fields[14] = "3741185452964196";
    fields[15] = "549";
    fields[16] = "05/2025";
    fields[17] = "HUGO N. FONSECA";
    fields[18] = "Itaú";
    fields[19] = "0479";
    fields[20] = "247896-3";
    try{
        Account::updateProfile(fields, 1, true, true);
        try {
            usuario_logado = Account::login("Viado", "123456789GO");
            ASSERT_EQ("Sr Frodo", usuario_logado->getFirstName());
            ASSERT_EQ("Viado", usuario_logado->getUsername());
            cout<<usuario_logado->getFirstName()<<endl;
        }
        catch(char *error){
            cout<<error<<endl;
        }
    }
    catch (char *error){
        cout<<error<<endl;
    }

}
*/
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}