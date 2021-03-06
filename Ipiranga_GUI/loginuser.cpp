#include "loginuser.h"
#include "../include/Account.hpp"
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
    User *CurrentUser;  //Corrent User returned by BD
    string username = ui->lineName->text().toStdString();   //Login field
    string password = ui->linePass->text().toStdString();   //Pass field

    //check if is the admin
    if(username=="admin" && password=="admin"){
        //show the adminpage
        adminpage = new AdminPage;
        adminpage->showMaximized();
        this->hide();
        return;
    }

    try{
        //Catch the user on te BD
        CurrentUser = Account::login(username,password);

        this->hide(); //Hide login form

        //show the user page
        userapp = new UserApp(this, CurrentUser);
        userapp->showMaximized();
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
    formregister->show();   //Open the form register widget
}
