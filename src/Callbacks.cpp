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
    currentUser->setRating(atof(argv[27]));

    result->push_back(currentUser);
    return 0;
}

int Callbacks::adsCallback(void *ptr, int argc, char **argv, char **colNames){
    vector<Ads *>* result = (vector<Ads *>*) ptr;
    Ads *currentAd = new Ads((atoi(argv[0])));
    currentAd->setTitle(argv[1]);
    currentAd->setCategory(argv[2]);
    currentAd->setDate(argv[3]);
    currentAd->setSellerUsername(argv[4]);
    currentAd->setSellerId(atoi(argv[5]));
    currentAd->setDescription(argv[6]);
    currentAd->setCity(argv[7]);
    currentAd->setState(argv[8]);
    currentAd->setAmount(atoi(argv[9]));
    currentAd->setSellerRating(atof(argv[10]));
    currentAd->setPrice(atof(argv[11]));

    result->push_back(currentAd);
    return 0;
}

int Callbacks::historicCallback(void *ptr, int argc, char **argv, char **colNames){
    vector<Historic *>* result = (vector<Historic *>*) ptr;
    Historic *currentReg = new Historic((atoi(argv[0])));
    currentReg->setSellerId(atoi(argv[1]));
    currentReg->setSellerUsername(argv[2]);
    currentReg->setBuyerId(atoi(argv[3]));
    currentReg->setBuyerUsername(argv[4]);
    currentReg->setSellerRating(atoi(argv[5]));
    currentReg->setBuyerRating(atoi(argv[6]));
    currentReg->setAdId(atoi(argv[7]));
    currentReg->setQuantity(atoi(argv[8]));
    currentReg->setAdTitle(argv[9]);
    currentReg->setPrice(atof(argv[10]));
    currentReg->setDate(argv[11]);

    result->push_back(currentReg);
    return 0;
}

int Callbacks::friendshipCallback(void *ptr, int argc, char **argv, char **colNames) {
    vector<Friendship *>* result = (vector<Friendship *>*) ptr;
    Friendship *currentFriend = new Friendship(atoi(argv[0]));
    currentFriend->setUser1Id(atoi(argv[1]));
    currentFriend->setUser2Id(atoi(argv[2]));

    result->push_back(currentFriend);

    return 0;
}

int Callbacks::averageCallback(void *ptr, int argc, char **argv, char **colNames) {
    double *result = (double *) ptr;
    if(argv[0] != NULL)
        *result = atof(argv[0]);
    return 0;
}

int Callbacks::countCallback(void *ptr, int argc, char **argv, char **colNames){
    long *result = (long *) ptr;
    *result = atol(argv[0]);
    return 0;
}

int Callbacks::sumCallback(void *ptr, int argc, char **argv, char **colNames){
    long *result = (long *) ptr;
    *result = atol(argv[0]);
    return 0;
}

string Callbacks::getCurrentDate(){
    time_t Ad_toggle;
    struct tm *timeinfo;
    char date[30];
    string returningDate;
    time(&Ad_toggle);
    timeinfo = localtime(&Ad_toggle);
    strftime (date, 30,"%a, %b %e %Y - %R", timeinfo);
    returningDate = date;
    return returningDate;
}

void Callbacks::deleteVector(vector<class T> currentVector) {
    for(unsigned int i = 0; i<currentVector.size(); i++){
        delete (currentVector[i]);
    }
}