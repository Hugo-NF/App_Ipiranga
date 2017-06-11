#include "loginuser.h"
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
    QString username = ui->lineName->text();
    QString password = ui->linePass->text();

    string name=username.toStdString();
    string pass=password.toStdString();

    cout<<"Name:"<<name<<endl;
    cout<<"Pass:"<<pass<<endl;

    if(username == "Frodo" && password == "12345"){
        close();
        userapp = new UserApp(this);
        userapp->show();

    }else{
        QMessageBox::warning(this,tr("Login"),tr("UserName or PassWord is incorrect!"));
        ui->linePass->setText("");
    }
}

//--------------------REGISTER Click---------------------------
void LoginUser::on_pushRegister_clicked()
{
    formregister = new FormRegister(this);
    formregister->show();
}
