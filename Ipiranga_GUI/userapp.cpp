#include "userapp.h"
#include "ui_userapp.h"

UserApp::UserApp(QWidget *parent, User* _CurrentUser) :
    QMainWindow(parent),
    ui(new Ui::UserApp)
{
    ui->setupUi(this);

    this->setGeometry(0,0,1000,600);    //set the window size
    this->setMinimumSize(650,600);      //set the minimum window size

    CurrentUser = _CurrentUser;         //CurrentUser is a atribute of the class with the user current dates

    this->SetPropertyUserCurrent();     //set dates of the current users in the window
}

UserApp::~UserApp()
{
    delete ui;
}

void UserApp::SetPropertyUserCurrent(){
    ui->UserName->setText(QString::fromStdString(CurrentUser->getUsername()));  //set User name in the window
}
