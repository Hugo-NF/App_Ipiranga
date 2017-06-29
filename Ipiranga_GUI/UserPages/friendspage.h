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

private:
    Ui::FriendsPage *ui;

    User *CurrentUser; //User Active

    //Methods
    void setFriends();
    void setFields(FriendsLayout* , User*);
};

#endif // FRIENDSPAGE_H
