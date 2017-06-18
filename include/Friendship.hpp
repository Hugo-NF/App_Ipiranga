
#ifndef APP_IPIRANGA_FRIENDSHIP_HPP
#define APP_IPIRANGA_FRIENDSHIP_HPP
#define FRIEND_REPEATED "You have already added this user as a friend"

#include "User.hpp"

class Friendship{
private:
    unsigned int id;
    unsigned int idUser1;
    unsigned int idUser2;

    static void createTable(sqlite3 *);
    static void deleteTable(sqlite3 *);

public:
    Friendship(){}
    Friendship(unsigned int id){
        this->id = id;
    }
    ~Friendship(){}

    unsigned int getId();
    void setUser1Id(unsigned int);
    unsigned int getUser1Id();
    void setUser2Id(unsigned int);
    unsigned int getUser2Id();

    static void cleanTable();

    static void addAsFriend(unsigned int, unsigned int);
    static void removeFriend(unsigned int, unsigned int);
    static vector<User *> listFriends(unsigned int, bool, string, bool);
    static vector<unsigned int> getFriendsIds(sqlite3 *, unsigned int);
    static vector<unsigned int> getFriendsofFriendsIds(sqlite3 *, unsigned int);

};

#endif //APP_IPIRANGA_FRIENDSHIP_HPP
