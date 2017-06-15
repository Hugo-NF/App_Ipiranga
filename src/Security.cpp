#include "../include/Security.hpp"

void Security::verifyCPF(const char *CPF){
    int firstDigitAut = 0, secondDigitAut = 0;
    int firstDigitRes, secondDigitRes;
    int i, j;

    for (i = 0, j=10; i<9; i++, j--){
        firstDigitAut += ((CPF[i] - '0')*j);
    }
    firstDigitRes = (firstDigitAut*10)%11;
    if (firstDigitRes == 10)
        firstDigitRes = 0;
    if (firstDigitRes != (CPF[9] - '0'))
        throw (char *) INVALID_CPF;

    for (i = 0, j=11; i<10; i++, j--){
        secondDigitAut += ((CPF[i] - '0')*j);
    }
    secondDigitRes = (secondDigitAut*10)%11;
    if (secondDigitRes == 10)
        secondDigitRes = 0;
    if (secondDigitRes != (CPF[10] - '0'))
        throw (char *) INVALID_CPF;
}

void Security::verifyCard(User *aut) {
    string cardNumber = aut->getCardNumber();
    if (cardNumber.size()!= 16)
        throw (char *) CARD_INFO_MISMATCH;

    if(cardNumber[0] == '4')
        aut->setCardOperator("Visa");
    else if (cardNumber[0] == '5')
        aut->setCardOperator("MasterCard");
    else if (cardNumber[0] == '6')
        aut->setCardOperator("Discover");
    else if (cardNumber.compare(0, 2, "35"))
        aut->setCardOperator("JCB");
    else if (cardNumber.compare(0, 2, "36") || cardNumber.compare(0, 2, "38"))
        aut->setCardOperator("Diners Club");
    else if (cardNumber.compare(0, 2, "34") || cardNumber.compare(0, 2, "37"))
        aut->setCardOperator("American Express");
    else
        throw (char *) CARD_INFO_MISMATCH;
}

