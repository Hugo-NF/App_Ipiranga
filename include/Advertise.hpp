
#ifndef APP_IPIRANGA_ADVERTISE_HPP
#define APP_IPIRANGA_ADVERTISE_HPP

#include "Ads.hpp"
#include <ctime>

#define DELETE_AD_ERROR "Sorry, we could not delete your ad right now, please try again later"
#define REGISTER_AD_ERROR "Sorry, we could not publish your ad right now, please try again later"
#define MODIFY_AD_ERROR "Sorry, we could not update your ad right now, please try again later"

class Advertise {
public:
    static void createAd(User *, vector<string>, double, unsigned int);
    static void deleteAd(unsigned int);
    static void editAd(unsigned int, vector<string>, double, unsigned int);
};

#endif //APP_IPIRANGA_ADVERTISE_HPP
