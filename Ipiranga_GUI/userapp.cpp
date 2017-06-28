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

    //------------------------------------------------------


    //ISERTING PAGES IN THE FRAME OF USER APP

    // Page 0 - Home
    PageZero.SetCurrentUser(CurrentUser);
    ui->Pages->insertWidget(0,&PageZero);

    // Page 1 - Profile Edit
    PageOne.SetCurrentUser(CurrentUser);
    PageOne.SetFather(this);
    ui->Pages->insertWidget(1,&PageOne);

    // Page 2 - FriendsPage
    PageTwo.SetCurrentUser(CurrentUser);
    ui->Pages->insertWidget(2,&PageTwo);

    //Page 3 - Historic
    PageThree.SetCurrentUser(CurrentUser);
    ui->Pages->insertWidget(3,&PageThree);

    // Page 4 - Advertise
    PageFour.SetCurrentUser(CurrentUser);
    ui->Pages->insertWidget(4,&PageFour);

    // Page Result - Search
    PageResult = new SearchResult;
    PageResult->SetCurrentUser(CurrentUser);
    ui->Pages->insertWidget(5,PageResult);

    //Set witch is the first page
    ui->Pages->setCurrentIndex(0);

    ui->Adjust_friends->hide();
    ui->Adjust_ads->hide();
    ToolActive = false;
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
    ui->Pages->setCurrentIndex(0);
}

void UserApp::on_Button_edit_clicked()
{
    ui->Pages->setCurrentIndex(1);
}

void UserApp::on_Button_friends_clicked()
{
    ui->Pages->setCurrentIndex(2);
}

void UserApp::on_Button_historic_clicked()
{
    ui->Pages->setCurrentIndex(3);
}

void UserApp::on_Button_advertise_clicked()
{
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
    if(ToolActive){
        on_Button_adjust_clicked();
    }

    SearchType = true;  //Set the search to friends

    ui->Button_search_advertise->setEnabled(true);
    ui->Button_search_friends->setEnabled(false);
}

void UserApp::on_Button_search_advertise_clicked()
{
    if(ToolActive){
        on_Button_adjust_clicked();
    }

    SearchType = false;  //Set the search to advertise

    ui->Button_search_friends->setEnabled(true);
    ui->Button_search_advertise->setEnabled(false);
}
//---------------------------------------------

//---------------SEARCH BUTTONS----------------
void UserApp::on_Button_search_clicked()
{
    this->on_line_search_returnPressed();
}

void UserApp::on_line_search_returnPressed()
{   
    vector <Ads*> search_result;
    vector <string> criterias;
    vector <string> keywords;
    //mudar na classe searchresult

    if(SearchType && getFields_Search_Friends()){
        //search_result = Search::userSearch(&parameters);
    }else if(!SearchType && getFields_Search_Ads()){

        //-----------Set id do usuario---------------
        Search parameters(CurrentUser.getId());

        //-----------Set o texto de busca---------------
        parameters.enableTextSearch(true);
        parameters.setText(SearchText); //caixa da busca

        //-----------Set os valores de rating----------
        if(A_rating_value!=0){
            parameters.enablebandFilter(true); //filtros por valor e rank
            parameters.setBandFilterCriteria("ranking");//ranking ou price
            parameters.setMinValue((double)A_rating_value);//valor min price ou rating
            parameters.setMaxValue(5.0);//valor max price or rating
        }else{
            parameters.enablebandFilter(false);
        }

        //--------Set amigos ou amigos de amigos------
        if(A_friends){
            parameters.enableFriendsSearch(true); //busca por amigos
            parameters.enableFriendsofFriendsSearch(false); //busca amigos de
        }else if(A_friends_of){
            parameters.enableFriendsSearch(false); //busca por amigos
            parameters.enableFriendsofFriendsSearch(true); //busca amigos de
        }else{
            parameters.enableFriendsSearch(false); //busca por amigos
            parameters.enableFriendsofFriendsSearch(false); //busca amigos de
        }

        //-------set criterios de busca (categoria e estado)------------
        parameters.enableFilters(false); //filtros de categoria
        if(!A_category_text.empty()){
            parameters.enableFilters(true); //filtros de categoria
            criterias.push_back("category");
            keywords.push_back(A_category_text);
        }
        if(!A_state_text.empty()){
            parameters.enableFilters(true); //filtros de categoria
            criterias.push_back("state");
            keywords.push_back(A_state_text);
        }
        parameters.setCriterias(criterias); //vector strings criterios Ex: category...
        parameters.setKeywords(keywords);// vector string chaves Ex: carro, brasilia

        //--------set ordenacao por------------
        parameters.enableOrdenation(true); // ordernar ou n
        if(A_title){
            parameters.setOrderBy("title");//parametro de ordenação
        }else if(A_category){
            parameters.setOrderBy("category");//parametro de ordenação
        }else if(A_price){
            parameters.setOrderBy("price");//parametro de ordenação
        }else if(A_rating){
            parameters.setOrderBy("rating");//parametro de ordenação
        }else if(A_city){
            parameters.setOrderBy("city");//parametro de ordenação
        }else if(A_quantity){
            parameters.setOrderBy("quantity");//parametro de ordenação
        }
        parameters.setOrderingSequence(A_by_); // 1^ 0|

        try{
            search_result = Search::adsSearch(&parameters);
        }catch(...){}

        criterias.~vector();
        keywords.~vector();

    }else{
        return;
    }

    PageResult->~SearchResult();

    PageResult = new SearchResult;

    PageResult->SetCurrentUser(CurrentUser);
    PageResult->setSearchType(SearchType);
    PageResult->setResults(search_result);

    ui->Pages->insertWidget(5,PageResult);

    ui->Pages->setCurrentWidget(PageResult);
}
//---------------------------------------------

//---------------ADJUST BUTTON----------------
void UserApp::on_Button_adjust_clicked()
{
    if(ToolActive){
        if(SearchType){
            ui->Adjust_friends->hide();
            ToolActive=false;
        }else{
            ui->Adjust_ads->hide();
            ToolActive=false;
        }
    }else{
        if(SearchType){
            ui->Adjust_friends->show();
            ToolActive=true;
        }else{
            ui->Adjust_ads->show();
            ToolActive=true;
        }
    }
}

//---------------GET FIELDS OF SEARCH-----------------
bool UserApp::getFields_Search_Ads(){
    if(!(ui->line_search->text().isEmpty())){

        SearchText = ui->line_search->text().toStdString();
        A_category_text = ui->comboBox_category->currentText().toStdString();
        A_state_text = ui->line_state->text().toStdString();
        A_rating_value = ui->comboBox_rating->currentIndex();
        A_min_price = stoi(ui->line_min->text().toStdString());
        A_max_price = stoi(ui->line_max->text().toStdString());
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

        SearchText = ui->line_search->text().toStdString();
        F_state = ui->line_state_2->text().toStdString();
        F_rating = ui->comboBox_rating_2->currentIndex();
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
    if(A_title && A_by_){
        A_by_ = false;
        //ALTERNAR ICONE
    }
    else{
        A_by_ = true;
        //ALTERNAR ICONE
    }

    A_title = true;
    A_category = false;
    A_price = false;
    A_rating = false;
    A_city = false;
    A_quantity = false;
    //DESATIVAR ICONE DOS OUTROS
    on_line_search_returnPressed();
}

void UserApp::on_command_category_clicked()
{
    if(A_category && A_by_){
        A_by_ = false;
        //ALTERNAR ICONE
    }
    else{
        A_by_ = true;
        //ALTERNAR ICONE
    }

    A_category = true;
    A_title = false;
    A_price = false;
    A_rating = false;
    A_city = false;
    A_quantity = false;
    //DESATIVAR ICONE DOS OUTROS
    on_line_search_returnPressed();
}

void UserApp::on_command_price_clicked()
{
    if(A_price && A_by_){
        A_by_ = false;
        //ALTERNAR ICONE
    }
    else{
        A_by_ = true;
        //ALTERNAR ICONE
    }

    A_price = true;
    A_title = false;
    A_category = false;
    A_rating = false;
    A_city = false;
    A_quantity = false;
    //DESATIVAR ICONE DOS OUTROS
    on_line_search_returnPressed();
}

void UserApp::on_command_rating_clicked()
{
    if(A_rating && A_by_){
        A_by_ = false;
        //ALTERNAR ICONE
    }
    else{
        A_by_ = true;
        //ALTERNAR ICONE
    }

    A_rating = true;
    A_title = false;
    A_category = false;
    A_price = false;
    A_city = false;
    A_quantity = false;
    //DESATIVAR ICONE DOS OUTROS
    on_line_search_returnPressed();
}

void UserApp::on_command_city_clicked()
{
    if(A_city && A_by_){
        A_by_ = false;
        //ALTERNAR ICONE
    }
    else{
        A_by_ = true;
        //ALTERNAR ICONE
    }

    A_city = true;
    A_title = false;
    A_category = false;
    A_price = false;
    A_rating = false;
    A_quantity = false;
    //DESATIVAR ICONE DOS OUTROS
    on_line_search_returnPressed();
}

void UserApp::on_command_quantity_clicked()
{
    if(A_quantity && A_by_){
        A_by_ = false;
        //ALTERNAR ICONE
    }
    else{
        A_by_ = true;
        //ALTERNAR ICONE
    }

    A_quantity = true;
    A_title = false;
    A_category = false;
    A_price = false;
    A_rating = false;
    A_city = false;
    //DESATIVAR ICONE DOS OUTROS
    on_line_search_returnPressed();
}

//------------FRIENDS---------------------
void UserApp::on_command_rating_2_clicked()
{
    if(F_byRating && F_by_){
        F_by_ = false;
        //ALTERNAR ICONE
    }
    else{
        F_by_ = true;
        //ALTERNAR ICONE
    }

    F_byCity = false;
    F_byName = false;
    F_byRating = true;
    //DESATIVAR ICONE DOS OUTROS
    on_line_search_returnPressed();
}

void UserApp::on_command_name_clicked()
{
    if(F_byName && F_by_){
        F_by_ = false;
        //ALTERNAR ICONE
    }
    else{
        F_by_ = true;
        //ALTERNAR ICONE
    }

    F_byCity = false;
    F_byName = true;
    F_byRating = false;
    //DESATIVAR ICONE DOS OUTROS
    on_line_search_returnPressed();
}

void UserApp::on_command_city_2_clicked()
{
    if(F_byCity && F_by_){
        F_by_ = false;
        //ALTERNAR ICONE
    }
    else{
        F_by_ = true;
        //ALTERNAR ICONE
    }

    F_byCity = true;
    F_byName = false;
    F_byRating = false;
    //DESATIVAR ICONE DOS OUTROS
    on_line_search_returnPressed();
}
//------------------END ORDER BY---------------------

