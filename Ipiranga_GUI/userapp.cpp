#include "userapp.h"
#include "ui_userapp.h"
#include "loginuser.h"
#include <QMessageBox>

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

    //------------------------------------------------------


    //ISERTING PAGES IN THE FRAME OF USER APP

    // Page 0 - Home
    ui->Pages->insertWidget(0,&PageZero);
    PageZero.SetCurrentUser(CurrentUser);

    // Page 1 - Profile Edit
    ui->Pages->insertWidget(1,&PageOne);
    PageOne.SetCurrentUser(CurrentUser);

    // Page 2 - FriendsPage
    ui->Pages->insertWidget(2,&PageTwo);
    PageTwo.SetCurrentUser(CurrentUser);

    //Page 3 - Historic
    ui->Pages->insertWidget(3,&PageThree);
    PageThree.SetCurrentUser(CurrentUser);

    // Page 4 - Advertise
    ui->Pages->insertWidget(4,&PageFour);
    PageFour.SetCurrentUser(CurrentUser);

    // Page Result - Search
    ui->Pages->insertWidget(5,&PageResult);
    PageResult.SetCurrentUser(CurrentUser);

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
    this->hide();
    system("./Ipiranga");
    this->close();
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
    cout<<"Fazer Busca"<<endl;
    ui->Pages->setCurrentWidget(&PageResult);
}
//---------------------------------------------

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
