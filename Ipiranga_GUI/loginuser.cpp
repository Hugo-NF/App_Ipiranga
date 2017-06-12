#include "loginuser.h"
#include "../include/User.hpp"
#include "ui_loginuser.h"
#include <QMessageBox>
#include <iostream>

using namespace std;

LoginUser::LoginUser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginUser)
{
    ui->setupUi(this);
}

LoginUser::~LoginUser()
{
    delete ui;
}

//--------------------LOGIN Click-----------------------------
void LoginUser::on_pushLogin_clicked()
{
    User *CurrentUser;
    string username = ui->lineName->text().toStdString();
    string password = ui->linePass->text().toStdString();

    try{
        CurrentUser = CurrentUser->login(username,password);
        close();
        userapp = new UserApp(this);
        userapp->show();

    }
    catch(const char *erro){
        QMessageBox::warning(this,tr("Login"),tr(erro));
        ui->linePass->setText("");
    }
}

//--------------------REGISTER Click---------------------------
void LoginUser::on_pushRegister_clicked()
{
    formregister = new FormRegister(this);
    formregister->show();
}
