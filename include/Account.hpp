#ifndef APP_IPIRANGA_AUTENTICATION_HPP
#define APP_IPIRANGA_AUTENTICATION_HPP

#include "User.hpp"
#define LOGIN_FAILED "Invalid login credentials"
#define RG_CONSTRAINT "RG previously registered"
#define CPF_CONSTRAINT "CPF previously registered"
#define EMAIL_CONSTRAINT "E-mail current in use by another user"
#define USERNAME_CONSTRAINT "Username unavailable"
#define ACTIVATION_ERROR "Could not activate your account"

class Account {
public:
    static User* login(string, string);
    static void registerUser(vector<string>, bool, bool);
    static void activateAccount(int, bool);
    static void deleteAccount(int);
    static void updateProfile(vector<string>, unsigned int, bool, bool);
};

#endif //APP_IPIRANGA_AUTENTICATION_HPP
