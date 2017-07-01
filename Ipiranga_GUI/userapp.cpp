#include "userapp.h"
#include "ui_userapp.h"
#include "loginuser.h"
#include <QMessageBox>
#include "../include/Search.hpp"

UserApp::UserApp(QWidget *parent, User* _CurrentUser) :
    QMainWindow(parent),
    ui(new Ui::UserApp)
{
    ui->setupUi(this);

    //--------------Iniciation Setups-----------------------

    this->setMinimumSize(650,600);      //set the minimum window size

    CurrentUser = *_CurrentUser;         //CurrentUser is a atribute of the class with the user current dates
    _CurrentUser->~User();              //Adios User O/, that came from the LoginUser

    if(!CurrentUser.isActivated()){
        QMessageBox::information(this,tr("Welcome"),tr("Welcome to Ipiranga\n Let's get started, make a search!"));
        Account::activateAccount(CurrentUser.getId(),true);
    }

    this->SetPropertyUserCurrent();     //set dates of the current users in the window

    ui->Button_search_friends->setEnabled(true);    // If the parameter in the 'setEnable' is false
    ui->Button_search_advertise->setEnabled(false); // the search is for that kind
    SearchType = false;                             // Set the search to Advertise

    //--Ads search--
    A_title=false;                  //set the order by title to initial value
    on_command_title_clicked();     //set the order by title to true, like a default

    //--Friends search--
    F_byName=false;                 //set the order by name to initial value
    on_command_name_clicked();      //set the order by name to true, like a defaut

    ui->Adjust_friends->hide();
    ui->Adjust_ads->hide();
    ToolActive = false;
    //------------------------------------------------------


    //ISERTING PAGES IN THE FRAME OF USER APP

    // Page 0 - Home
    PageZero = new InitialPage;
    PageZero->SetCurrentUser(&CurrentUser);
    ui->Pages->insertWidget(0,PageZero);

    // Page 1 - Profile Edit
    PageOne.SetCurrentUser(&CurrentUser);
    PageOne.SetFather(this);
    ui->Pages->insertWidget(1,&PageOne);

    // Page 2 - FriendsPage
    PageTwo = new FriendsPage;
    ui->Pages->insertWidget(2,PageTwo);

    //Page 3 - Historic
    PageThree = new HistoricPage;
    ui->Pages->insertWidget(3,PageThree);

    // Page 4 - Advertise
    PageFour.SetCurrentUser(&CurrentUser);
    ui->Pages->insertWidget(4,&PageFour);

    // Page Result - Search
    PageResult = new SearchResult;
    PageResult->SetCurrentUser(&CurrentUser);
    ui->Pages->insertWidget(5,PageResult);

    //Set witch is the first page
    ui->Pages->setCurrentIndex(0);
}

UserApp::~UserApp()
{
    delete ui;
}

void UserApp::logoff(){
    this->on_Button_logout_clicked();
}

void UserApp::SetPropertyUserCurrent(){
    ui->UserName->setText(QString::fromStdString(CurrentUser.getFirstName()));  //set User name in the window
}

//---------------MENU BUTTONS-----------------
void UserApp::on_Button_home_clicked()
{
    //delete actual, create a new and show the home
    PageZero->~InitialPage();
    PageZero = new InitialPage;
    PageZero->SetCurrentUser(&CurrentUser);
    ui->Pages->insertWidget(0,PageZero);
    ui->Pages->setCurrentIndex(0);
}

void UserApp::on_Button_edit_clicked()
{
    ui->Pages->setCurrentIndex(1);
}

void UserApp::on_Button_friends_clicked()
{
    //delete actual, create a new and show the friends page
    PageTwo->~FriendsPage();
    PageTwo = new FriendsPage;
    PageTwo->SetCurrentUser(&CurrentUser);
    ui->Pages->insertWidget(2,PageTwo);
    ui->Pages->setCurrentIndex(2);
}

void UserApp::on_Button_historic_clicked()
{
    //delete actual, create a new and show the historics
    PageThree->~HistoricPage();
    PageThree = new HistoricPage;
    PageThree->SetCurrentUser(&CurrentUser);
    ui->Pages->insertWidget(3,PageThree);
    ui->Pages->setCurrentIndex(3);
}

void UserApp::on_Button_advertise_clicked()
{
    //alternat the page to advertise page
    ui->Pages->setCurrentIndex(4);
}


void UserApp::on_Button_logout_clicked()
{
    if(QMessageBox::question(this,tr("Logout"),tr("Do you really want to leave?"))
                == QMessageBox::Yes){
        this->hide();
        system("./Ipiranga&");
        this->close();
    }
}
//---------------------------------------------

//------------SEARCH TYPE BUTTONS--------------
void UserApp::on_Button_search_friends_clicked()
{
    //check if tool of search was clicked
    if(ToolActive){
        on_Button_adjust_clicked();
    }

    SearchType = true;  //Set the search to friends

    ui->Button_search_advertise->setEnabled(true);  //clickable
    ui->Button_search_friends->setEnabled(false);   //not clickable
}

void UserApp::on_Button_search_advertise_clicked()
{
    if(ToolActive){
        on_Button_adjust_clicked();
    }

    SearchType = false;  //Set the search to advertise

    ui->Button_search_friends->setEnabled(true);    //clickable
    ui->Button_search_advertise->setEnabled(false); //not clickable
}
//---------------------------------------------

//---------------SEARCH BUTTONS----------------
void UserApp::on_Button_search_clicked()
{
    //call another function to make the search
    this->on_line_search_returnPressed();
}

void UserApp::on_line_search_textChanged()
{
    //call another function to make the search
    this->on_line_search_returnPressed();
}

void UserApp::on_line_search_returnPressed()
{   
    vector <Ads*> search_result_ads;        //ads information, to search of ads
    vector <User*> search_result_friend;    //users information, to search of users
    vector <string> criterias;      //criterias of search
    vector <string> keywords;       //keywords of search

    //-----------------SEARCH FRIENDS---------------
    if(SearchType && getFields_Search_Friends()){
        //-----------Set id of user---------------
        Search parameters(CurrentUser.getId());

        //-----------Set the text of search---------------
        parameters.enableTextSearch(true);
        parameters.setText(SearchText); //caixa da busca

        //--------Set amigos ou amigos de amigos------
        if(F_friends){
            parameters.enableFriendsSearch(true); //search for friends
            parameters.enableFriendsofFriendsSearch(false); 
        }else if(F_friends_of){
            parameters.enableFriendsSearch(false);
            parameters.enableFriendsofFriendsSearch(true); //search for friends of friens
        }else{
            parameters.enableFriendsSearch(false); //search for all
            parameters.enableFriendsofFriendsSearch(false);
        }

        //-------set criterias of search (state)------------
        parameters.enableFilters(false); //filter of category
        if(!F_state.empty()){
            parameters.enableFilters(true); //filter of categoria
            //define criterias and keywords of search
            criterias.push_back("state");
            keywords.push_back(F_state);
        }
        parameters.setCriterias(criterias); //vector strings criterias Ex: category, state...
        parameters.setKeywords(keywords);// vector string keywords Ex: car, DF

        //--------set ordenation for------------
        parameters.enableOrdenation(true);  // enable the ordenation
        
        // ordenation for what?
        if(F_byName){
            parameters.setOrderBy("username");
        }else if(F_byCity){
            parameters.setOrderBy("city");
        }else if(F_byRating){
            parameters.setOrderBy("rating");
        }
        //set the ordenation to asc or desc
        parameters.setOrderingSequence(F_by_); // 1 to ASC, 0 to DESC

        //make the search for users, receive the information of users
        search_result_friend = Search::userSearch(&parameters);

        //delete actual page of results
        PageResult->~SearchResult();

        //creat a new page of results
        PageResult = new SearchResult;

        //set the current user, type of search (users) and the results
        PageResult->SetCurrentUser(&CurrentUser);
        PageResult->setSearchType(SearchType);
        PageResult->set_F_Results(search_result_friend);

        //alternate page to results page
        ui->Pages->insertWidget(5,PageResult);

        //put all on the results on the screen
        ui->Pages->setCurrentWidget(PageResult);

    //-----------------SEARCH ADS---------------
    }else if(!SearchType && getFields_Search_Ads()){

        //-----------Set id of user---------------
        Search parameters(CurrentUser.getId());

        //-----------Set the text of search---------------
        parameters.enableTextSearch(true);
        parameters.setText(SearchText);

        //--------Set friends, friends of friends or all------
        if(A_friends){
            parameters.enableFriendsSearch(true);
            parameters.enableFriendsofFriendsSearch(false);
        }else if(A_friends_of){
            parameters.enableFriendsSearch(false);
            parameters.enableFriendsofFriendsSearch(true);
        }else{
            parameters.enableFriendsSearch(false);
            parameters.enableFriendsofFriendsSearch(false);
        }

        //-------set criterias of search (category and state)------------
        parameters.enableFilters(false);
        if(!A_category_text.empty()){
            parameters.enableFilters(true);
            criterias.push_back("category");
            keywords.push_back(A_category_text);
        }
        if(!A_state_text.empty()){
            parameters.enableFilters(true);
            criterias.push_back("state");
            keywords.push_back(A_state_text);
        }
        parameters.setCriterias(criterias); //vector strings criterias Ex: category, state...
        parameters.setKeywords(keywords);// vector string keywords Ex: car, DF

        //--------set ordenation for------------
        parameters.enableOrdenation(true);
        if(A_title){
            parameters.setOrderBy("title");//parameter of ordenation
        }else if(A_category){
            parameters.setOrderBy("category");//parameter of ordenation
        }else if(A_price){
            parameters.setOrderBy("price");//parameter of ordenation
        }else if(A_rating){
            parameters.setOrderBy("sellerRating");//parameter of ordenation
        }else if(A_city){
            parameters.setOrderBy("city");//parameter of ordenation
        }else if(A_quantity){
            parameters.setOrderBy("quantity");//parameter of ordenation
        }
        parameters.setOrderingSequence(A_by_); // 1 to asc, 0 to desc

        //make the search for ads
        search_result_ads = Search::adsSearch(&parameters);

        //delete actual page of results
        PageResult->~SearchResult();

        //create a new
        PageResult = new SearchResult;

        //set current user, search type (ads) and the Results
        PageResult->SetCurrentUser(&CurrentUser);
        PageResult->setSearchType(SearchType);
        PageResult->set_A_Results(search_result_ads);

        ui->Pages->insertWidget(5,PageResult);

        ui->Pages->setCurrentWidget(PageResult);

    }else{
        //if text line of search is empty
        return;
    }

}
//---------------------------------------------

//---------------ADJUST BUTTON----------------
void UserApp::on_Button_adjust_clicked()
{
    if(ToolActive){                         //if button of adjust search is active
        if(SearchType){                     //check witch is the search type (users or ads)
            ui->Adjust_friends->hide();
            ToolActive=false;               //desactive friends adjust box
        }else{
            ui->Adjust_ads->hide();
            ToolActive=false;               //desactive ads adjust box
        }
    }else{                                  //if button of adjust search is not active
        if(SearchType){                     //check witch is the search type (users or ads)
            ui->Adjust_friends->show();
            ToolActive=true;                //active friends adjust box
        }else{
            ui->Adjust_ads->show();
            ToolActive=true;                //active ads adjust box
        }
    }
}

//---------------GET FIELDS OF SEARCH-----------------
bool UserApp::getFields_Search_Ads(){
    if(!(ui->line_search->text().isEmpty())){

        //get each field of search for ads
        SearchText = ui->line_search->text().toStdString();
        A_category_text = ui->comboBox_category->currentText().toStdString();
        A_state_text = ui->line_state->text().toStdString();
        A_all = ui->radio_all->isChecked();
        A_friends = ui->radio_friends->isChecked();
        A_friends_of = ui->radio_friends_of->isChecked();

        return true;    //searche text field is not empty
    }else{
        return false;  //search text field is empty
    }
}

bool UserApp::getFields_Search_Friends(){
    if(!(ui->line_search->text().isEmpty())){

        //get each field of search for users
        SearchText = ui->line_search->text().toStdString();
        F_state = ui->line_state_2->text().toStdString();
        F_all = ui->radio_all_2->isChecked();
        F_friends = ui->radio_friends_2->isChecked();
        F_friends_of = ui->radio_friends_of_2->isChecked();

        return true; //searche text field is not empty
    }else{
        return false; //searche text field is empty
    }
}
//-----------------------------------------------------

//----------------ORDER BY - SETTINGS------------------

//----------------ADS-------------------
void UserApp::on_command_title_clicked()
{
    //alternat to ordenation for title
    //asc or desc 
    
    if(A_title && A_by_){
        A_by_ = false;
    }
    else{
        A_by_ = true;
    }

    A_title = true;
    A_category = false;
    A_price = false;
    A_rating = false;
    A_city = false;
    A_quantity = false;
    
    //make the search again
    on_line_search_returnPressed();
}

void UserApp::on_command_category_clicked()
{
    //alternat to ordenation for category
    //asc or desc
    if(A_category && A_by_){
        A_by_ = false;
    }
    else{
        A_by_ = true;
    }

    A_category = true;
    A_title = false;
    A_price = false;
    A_rating = false;
    A_city = false;
    A_quantity = false;
    
    on_line_search_returnPressed();
}

void UserApp::on_command_price_clicked()
{
    //alternat to ordenation for price
    //asc or desc
    if(A_price && A_by_){
        A_by_ = false;
    }
    else{
        A_by_ = true;
    }

    A_price = true;
    A_title = false;
    A_category = false;
    A_rating = false;
    A_city = false;
    A_quantity = false;
    
    on_line_search_returnPressed();
}

void UserApp::on_command_rating_clicked()
{
    //alternat to ordenation for rating
    //asc or desc
    if(A_rating && A_by_){
        A_by_ = false;
    }
    else{
        A_by_ = true;
    }

    A_rating = true;
    A_title = false;
    A_category = false;
    A_price = false;
    A_city = false;
    A_quantity = false;

    on_line_search_returnPressed();
}

void UserApp::on_command_city_clicked()
{
    //alternat to ordenation for city
    //asc or desc
    if(A_city && A_by_){
        A_by_ = false;
    }
    else{
        A_by_ = true;
    }

    A_city = true;
    A_title = false;
    A_category = false;
    A_price = false;
    A_rating = false;
    A_quantity = false;

    on_line_search_returnPressed();
}

void UserApp::on_command_quantity_clicked()
{
    //alternat to ordenation for quantity
    //asc or desc
    if(A_quantity && A_by_){
        A_by_ = false;
    }
    else{
        A_by_ = true;
    }

    A_quantity = true;
    A_title = false;
    A_category = false;
    A_price = false;
    A_rating = false;
    A_city = false;

    on_line_search_returnPressed();
}

//------------FRIENDS---------------------
void UserApp::on_command_rating_2_clicked()
{
    //alternat to ordenation for rating
    //asc or desc
    if(F_byRating && F_by_){
        F_by_ = false;
    }
    else{
        F_by_ = true;
    }

    F_byCity = false;
    F_byName = false;
    F_byRating = true;

    on_line_search_returnPressed();
}

void UserApp::on_command_name_clicked()
{
    //alternat to ordenation for name
    //asc or desc
    if(F_byName && F_by_){
        F_by_ = false;
    }
    else{
        F_by_ = true;
    }

    F_byCity = false;
    F_byName = true;
    F_byRating = false;

    on_line_search_returnPressed();
}

void UserApp::on_command_city_2_clicked()
{
    //alternat to ordenation for city
    //asc or desc
    if(F_byCity && F_by_){
        F_by_ = false;
    }
    else{
        F_by_ = true;
    }

    F_byCity = true;
    F_byName = false;
    F_byRating = false;

    on_line_search_returnPressed();
}
//------------------END ORDER BY---------------------
