
#ifndef APP_IPIRANGA_CALLBACKS_HPP
#define APP_IPIRANGA_CALLBACKS_HPP

#include "Ads.hpp"

class Callbacks {
public:
    static int userCallback(void *, int, char **, char **);
    static int adsCallback(void *, int, char **, char **);
    static int averageCallback(void *, int, char **, char **);
};

#endif //APP_IPIRANGA_CALLBACKS_HPP
