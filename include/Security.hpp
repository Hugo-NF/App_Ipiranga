#ifndef APP_IPIRANGA_PAYMENT_HPP
#define APP_IPIRANGA_PAYMENT_HPP

#include "User.hpp"
#define CARD_INFO_MISMATCH "Inconsistent credit card information"
#define INVALID_CPF "Invalid CPF number"

class Security{ //Tasks for this class: check consistency of the banking data provided by the user and make payments
public:
    static void verifyCPF(const char *);
    static void verifyCard(User *);
    static void verifyBankAccount(User *);
    static void checkout();
};

#endif //APP_IPIRANGA_PAYMENT_HPP
