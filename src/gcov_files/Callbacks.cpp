#include "../include/Callbacks.hpp"


int Callbacks::userCallback(void *ptr, int argc, char **argv, char **colNames) {
        vector<User *>* result = (vector<User *>*) ptr;
        User *currentUser = new User((atoi(argv[0])));
        currentUser->setFirstName(argv[1]);
        currentUser->setLastName(argv[2]);
        currentUser->setCPF(argv[3]);
        currentUser->setRG(argv[4]);
        currentUser->setAge(argv[5]);
        currentUser->setPhoneNumber(argv[6]);
        currentUser->setUsername(argv[7]);
        currentUser->setPassword(argv[8]);
        currentUser->setEmail(argv[9]);
        currentUser->setActivation(atoi(argv[10]));
        currentUser->registerCard(atoi(argv[11]));
        currentUser->setCardType(argv[12]);
        currentUser->setCardOperator(argv[13]);
        currentUser->setCardNumber(argv[14]);
        currentUser->setCardName(argv[15]);
        currentUser->setSecurityCode(argv[16]);
        currentUser->setExpirationDate(argv[17]);
        currentUser->registerAccount(atoi(argv[18]));
        currentUser->setBank(argv[19]);
        currentUser->setAccountNumber(argv[20]);
        currentUser->setAgency(argv[21]);
        currentUser->setBalance(atof(argv[22]));
        currentUser->setAddress(argv[23]);
        currentUser->setZipCode(argv[24]);
        currentUser->setState(argv[25]);
        currentUser->setCity(argv[26]);

        result->push_back(currentUser);
        return 0;
}