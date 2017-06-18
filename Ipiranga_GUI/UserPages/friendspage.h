#ifndef FRIENDSPAGE_H
#define FRIENDSPAGE_H

#include <QWidget>
#include "../include/User.hpp"

namespace Ui {
class FriendsPage;
}

class FriendsPage : public QWidget
{
    Q_OBJECT

public:
    explicit FriendsPage(QWidget *parent = 0);
    ~FriendsPage();

    void SetCurrentUser(User);  //Set the User Active

private:
    Ui::FriendsPage *ui;

    User CurrentUser; //User Active

    //Methods
    void setFriends();
    void setFields(User user);
};

#endif // FRIENDSPAGE_H
