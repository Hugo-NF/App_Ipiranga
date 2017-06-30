#ifndef FRIENDSPAGE_H
#define FRIENDSPAGE_H

#include <QWidget>
#include "../include/User.hpp"
#include "layout/friendslayout.h"

namespace Ui {
class FriendsPage;
}

class FriendsPage : public QWidget
{
    Q_OBJECT

public:
    explicit FriendsPage(QWidget *parent = 0);
    ~FriendsPage();

    void SetCurrentUser(User*);  //Set the User Active
    void setAdminMode();         //Set the admin mode

private:
    Ui::FriendsPage *ui;

    User *CurrentUser; //User Active
    bool AdminMode;

    //Methods
    void setFriends();
};

#endif // FRIENDSPAGE_H
