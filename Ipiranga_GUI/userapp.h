#ifndef USERAPP_H
#define USERAPP_H

#include <QMainWindow>
#include"../include/User.hpp"

// Include Pages
#include "UserPages/initialpage.h"
#include "UserPages/editprofile.h"
#include "UserPages/friendspage.h"
#include "UserPages/historicpage.h"
#include "UserPages/advertise.h"
#include "UserPages/searchresult.h"


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
    void on_Button_edit_clicked();          // Editprofile
    void on_Button_home_clicked();          // Home Page
    void on_Button_friends_clicked();       // Friends
    void on_Button_historic_clicked();      // Historic
    void on_Button_advertise_clicked();     // Advertise
    void on_Button_logout_clicked();        // Logout

    //Search Buttons Actions
    void on_line_search_returnPressed();        // Return pressed in the search line
    void on_Button_search_clicked();            // Search button was clicked
    void on_Button_search_friends_clicked();    // Search friends filter
    void on_Button_search_advertise_clicked();  // Search Ads filter
    void on_Button_adjust_clicked();            // Button ajust (filters -> Ads/friends)

private:
    Ui::UserApp *ui;

    //Actual User
    User CurrentUser;

    //Pages Widget
    InitialPage PageZero;
    EditProfile PageOne;
    FriendsPage PageTwo;
    HistoricPage PageThree;
    Advertise PageFour;
    SearchResult *PageResult;

    //King of search
    bool SearchType; // 1 to Friends - o to Advertise
    bool ToolActive; // Filters Active or Not Active


    //Methods
    void SetPropertyUserCurrent();  //Set the property of the actual user
};

#endif // USERAPP_H
