#ifndef APP_IPIRANGA_LOGS_HPP
#define APP_IPIRANGA_LOGS_HPP

#include "Ads.hpp"
#include "Historic.hpp"
#include "User.hpp"
#define PAYMENT_ERROR "Sorry, we could not process your request right now, try again later"
#define OWN_AD "Sorry, but you can not buy your own product/service"
#define UNAVAIABLE_PRODUCT "Sorry, but we don't have enough stock to meet your request"
#define NOT_ENOUGH_MONEY "You don't have enough balance for this operation"

class Payment{
public:
    static void makePayment(Ads *, User*, unsigned int);
    static void withdrawBalance(User *, double);
};

#endif //APP_IPIRANGA_LOGS_HPP
