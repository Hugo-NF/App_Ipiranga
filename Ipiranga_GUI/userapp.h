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

    void logoff();

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

    void on_command_title_clicked();
    void on_command_category_clicked();
    void on_command_price_clicked();
    void on_command_rating_clicked();
    void on_command_city_clicked();
    void on_command_quantity_clicked();

    void on_command_rating_2_clicked();
    void on_command_name_clicked();
    void on_command_city_2_clicked();

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
    bool SearchType; // 1 to Friends - 0 to Advertise
    bool ToolActive; // Filters tools Active or Not Active

    //---------------Variables of searchs----------------
    string SearchText;

    //-----------Ads Search
    string A_category_text;  // search for category
    string A_state_text;     // for state
    int A_rating_value;       // for rating
    int A_min_price;    // from min price
    int A_max_price;    // until max price
    bool A_all;         // for all people
    bool A_friends;     // only friends
    bool A_friends_of;  // only friends of friends
    bool A_title;       // order by title
    bool A_category;    // order by category
    bool A_price;       // order by price
    bool A_rating;      // order by rating
    bool A_city;        // order by city
    bool A_quantity;    // order by quantity
    bool A_by_;         // order in ascendet = 1 or descendet=0

    //---------Friends Search
    string F_state;     // search for state
    int F_rating;       // for rating
    bool F_all;         // for all people
    bool F_friends;      // only friends
    bool F_friends_of;   // only friends of friends
    bool F_byRating;    // order by rating
    bool F_byName;      // order by name
    bool F_byCity;      // order by city
    bool F_by_;         // order in ascendet = 1 or descendet=0
    //------------------------------------------------------

    //Methods
    void SetPropertyUserCurrent();  //Set the property of the actual user
    bool getFields_Search_Friends();    // get the fields of search for Friends
    bool getFields_Search_Ads();        // get the fields of search for Ads
    //Return true if search text is not empty
};

#endif // USERAPP_H
