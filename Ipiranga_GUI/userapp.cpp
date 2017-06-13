#include "userapp.h"
#include "ui_userapp.h"

UserApp::UserApp(QWidget *parent, User* _CurrentUser) :
    QMainWindow(parent),
    ui(new Ui::UserApp)
{
    ui->setupUi(this);
    CurrentUser = _CurrentUser;
    ui->label->setText(QString::fromStdString(CurrentUser->getUsername()));
}

UserApp::~UserApp()
{
    delete ui;
}
