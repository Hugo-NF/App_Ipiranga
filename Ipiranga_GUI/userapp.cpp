#include "userapp.h"
#include "ui_userapp.h"

UserApp::UserApp(QWidget *parent, User* _CurrentUser) :
    QMainWindow(parent),
    ui(new Ui::UserApp)
{
    ui->setupUi(this);
    this->setGeometry(0,0,1000,600);
    this->setMinimumSize(650,600);
    CurrentUser = _CurrentUser;
}

UserApp::~UserApp()
{
    delete ui;
}
