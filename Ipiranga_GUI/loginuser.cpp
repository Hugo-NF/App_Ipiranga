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

    //WARNING: APAGAR DEPOIS
    User *a;
    userapp = new UserApp(this,a);
    userapp->show();
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
        hide();
        userapp = new UserApp(this, CurrentUser);
        userapp->show();

    }
    catch(const char *error){
        QMessageBox::warning(this,tr("Login"),tr(error));
        ui->linePass->setText("");
    }
    catch (char *error){
        QMessageBox::warning(this,tr("Login"),tr(error));
        ui->linePass->setText("");
    }
}

//--------------------REGISTER Click---------------------------
void LoginUser::on_pushRegister_clicked()
{
    formregister = new FormRegister(this);
    formregister->show();
}
