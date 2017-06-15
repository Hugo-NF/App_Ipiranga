#ifndef USERAPP_H
#define USERAPP_H

#include <QMainWindow>
#include"../include/User.hpp"

// Include Pages
#include "UserPages/initialpage.h"
#include "UserPages/editprofile.h"
#include "UserPages/friendspage.h"
#include "UserPages/historic.h"
#include "UserPages/advertise.h"


namespace Ui {
class UserApp;
}

class UserApp : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserApp(QWidget *parent = 0, User* _CurrentUser=0);
    ~UserApp();

private slots:

    //Menu Buttons Actions
    void on_Button_edit_clicked();
    void on_Button_home_clicked();
    void on_Button_friends_clicked();
    void on_Button_historic_clicked();
    void on_Button_advertise_clicked();
    void on_Button_logout_clicked();

    //Search Buttons Actions
    void on_line_search_returnPressed();
    void on_Button_search_clicked();

private:
    Ui::UserApp *ui;

    //Actual User
    User CurrentUser;

    //Pages Widget
    InitialPage PageZero;
    EditProfile PageOne;
    FriendsPage PageTwo;
    Historic PageThree;
    Advertise PageFour;


    //Methods
    void SetPropertyUserCurrent();  //Set the property of the actual user
};

#endif // USERAPP_H
