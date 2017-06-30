#include "adminpage.h"
#include "ui_adminpage.h"

AdminPage::AdminPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminPage)
{
    ui->setupUi(this);
}

AdminPage::~AdminPage()
{
    delete ui;
}

//---------------SET METHODS--------------------
void AdminPage::setUsers_default()
{
    vector <User*> users;

    this->setUsers(users);
}

void AdminPage::setUsers(vector <User*> users)
{
    int size;

    size = users.size();

    for(int i =0; i<size; i++){
        FriendsLayout* user_object = new FriendsLayout;


    }
}

//---------------BUTTONS SEARCH-------------------

//--USERS-----------------------------------------
void AdminPage::on_Button_search_users_clicked()
{
    this->on_line_search_users_returnPressed();
}

void AdminPage::on_line_search_users_returnPressed()
{

}

//--TRANSATION------------------------------------
void AdminPage::on_Button_search_transation_clicked()
{
    this->on_line_search_transation_returnPressed();
}

void AdminPage::on_line_search_transation_returnPressed()
{

}

//--HISTORICS------------------------------------
void AdminPage::on_Button_search_historics_clicked()
{
    this->on_line_search_historics_returnPressed();
}

void AdminPage::on_line_search_historics_returnPressed()
{

}
