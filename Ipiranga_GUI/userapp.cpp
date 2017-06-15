#include "userapp.h"
#include "ui_userapp.h"
#include "loginuser.h"

UserApp::UserApp(QWidget *parent, User* _CurrentUser) :
    QMainWindow(parent),
    ui(new Ui::UserApp)
{
    ui->setupUi(this);

    this->setMinimumSize(650,600);      //set the minimum window size

    CurrentUser = *_CurrentUser;         //CurrentUser is a atribute of the class with the user current dates

    _CurrentUser->~User();              //Adios User O/, that came from the LoginUser

    this->SetPropertyUserCurrent();     //set dates of the current users in the window


    //ISERTING PAGES IN THE FRAME OF USER APP

    // Page 0 - Home
    ui->Pages->insertWidget(0,&PageZero);

    // Page 1 - Profile Edit
    ui->Pages->insertWidget(1,&PageOne);

    // Page 2 - FriendsPage
    ui->Pages->insertWidget(2,&PageTwo);

    // Page 3 - Historic
    ui->Pages->insertWidget(3,&PageThree);

    // Page 4 - Advertise
    ui->Pages->insertWidget(4,&PageFour);

    //Set witch is the first page
    ui->Pages->setCurrentIndex(0);

}

UserApp::~UserApp()
{
    delete ui;
}

void UserApp::SetPropertyUserCurrent(){
    ui->UserName->setText(QString::fromStdString(CurrentUser.getUsername()));  //set User name in the window
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
    cout<<"Ainda não implementado"<<endl;
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
}
//---------------------------------------------
