#ifndef APP_IPIRANGA_PAYMENT_HPP
#define APP_IPIRANGA_PAYMENT_HPP

#include "User.hpp"
#include <cctype>
#define CARD_INFO_MISMATCH "Inconsistent credit card information"
#define INVALID_CPF "Invalid CPF number"
#define PROFANITY_FILTER "Your advertisement is in disagreement with our terms of use"

class Security{
public:
    static void verifyCPF(const char *);
    static void verifyCard(User *);
    static void filter(Ads *);
};

#endif //APP_IPIRANGA_PAYMENT_HPP
