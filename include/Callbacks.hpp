
#ifndef APP_IPIRANGA_CALLBACKS_HPP
#define APP_IPIRANGA_CALLBACKS_HPP

#include "User.hpp"
#include "Ads.hpp"
#include "Historic.hpp"
#include "Friendship.hpp"
#include <ctime>

using namespace std;

class Callbacks {
public:
    static int userCallback(void *, int, char **, char **);
    static int adsCallback(void *, int, char **, char **);
    static int historicCallback(void *, int, char **, char **);
    static int friendshipCallback(void *, int, char **, char **);
    static int averageCallback(void *, int, char **, char **);
    static int countCallback(void *, int, char **, char **);
    static int sumCallback(void *, int, char **, char **);
    static string getCurrentDate();
};

#endif //APP_IPIRANGA_CALLBACKS_HPP
