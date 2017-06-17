#ifndef APP_IPIRANGA_LOGS_HPP
#define APP_IPIRANGA_LOGS_HPP

#include "Ads.hpp"
#include "Historic.hpp"
#include "User.hpp"

class Payment{
    static void addToHistoric(Ads *, User *, unsigned int);

};

#endif //APP_IPIRANGA_LOGS_HPP
