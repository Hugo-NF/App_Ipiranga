#ifndef FRIENDSLAYOUT_H
#define FRIENDSLAYOUT_H

#include <QWidget>
#include <QMainWindow>
#include <QApplication>
#include "../include/User.hpp"
#include "UserPages/editprofile.h"

namespace Ui {
class FriendsLayout;
}

class FriendsLayout : public QWidget
{
    Q_OBJECT

public:
    explicit FriendsLayout(QWidget *parent = 0);
    ~FriendsLayout();

    void setCurrentUser(User*);  //User address
    void setMy_F_Address(User*); //Friend address
    void setAdminMode();         //Set mode Admin

private slots:
    void on_Button_delete_clicked();    //delete friends

    void on_see_more_clicked();
    void on_Button_show_friends_clicked();

    //Set Methods
    void setFields();
    void setName(QString);
    void setPhone(QString);
    void setEmail(QString);
    void setRating(QString);

private:
    Ui::FriendsLayout *ui;
    User* CurrentUser;
    User* My_F_Address;
    bool AdminMode;
};

#endif // FRIENDSLAYOUT_H
