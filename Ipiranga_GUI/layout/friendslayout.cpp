#include "friendslayout.h"
#include "ui_friendslayout.h"
#include <QMessageBox>
#include "../include/Friendship.hpp"
#include "UserPages/friendspage.h"
#include "../include/Account.hpp"

FriendsLayout::FriendsLayout(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FriendsLayout)
{
    ui->setupUi(this);

    //-----ADMIN MODE OFF---------
    AdminMode = false;
    ui->see_more->hide();
    ui->Button_show_friends->hide();
}

FriendsLayout::~FriendsLayout()
{
    delete ui;
}

//-----------------SET FUNCTIONS---------------------
void FriendsLayout::setAdminMode(){
    AdminMode=true;
    ui->Button_show_friends->show();
    ui->see_more->show();
}

void FriendsLayout::setCurrentUser(User* user)
{
    CurrentUser = user;
}

void FriendsLayout::setMy_F_Address(User* address)
{
    My_F_Address = address;
    this->setFields();
}

void FriendsLayout::setFields()
{
    this->setName(QString::fromStdString(My_F_Address->getUsername()));
    this->setPhone(QString::fromStdString(My_F_Address->getPhoneNumber()));
    this->setEmail(QString::fromStdString(My_F_Address->getEmail()));
    this->setRating(QString::number(My_F_Address->getRating()));
}

void FriendsLayout::setName(QString name)
{
    ui->label_name->setText(name);
}

void FriendsLayout::setPhone(QString phone)
{
    ui->label_number->setText(phone);
}

void FriendsLayout::setEmail(QString email)
{
    ui->label_email->setText(email);
}

void FriendsLayout::setRating(QString rating)
{
    ui->label_rating->setText(rating);
}

//------------------BUTTONS CLICKED------------------
void FriendsLayout::on_Button_delete_clicked()
{
    if(AdminMode){
        if(QMessageBox::question(this,tr("Delete User"),tr("Are you sure that want to DELETE this USER?"))
                == QMessageBox::Yes){
            try{
                Account::deleteAccount(My_F_Address->getId());
                QMessageBox::information(this,tr("Delete Account"),tr("This account was deleted with sucess!"));
                this->hide();
            }catch(char* err){
                QMessageBox::warning(this,tr("Delete Account"),tr(err));
            }
        }
    }else{
        if(QMessageBox::question(this,tr("Delete Friend"),tr("Are you sure that want to DELETE this friend?"))
                == QMessageBox::Yes){
            Friendship::removeFriend(CurrentUser->getId(),My_F_Address->getId());
            this->~FriendsLayout();
        }
    }
}

void FriendsLayout::on_see_more_clicked()
{
    EditProfile* informations = new EditProfile;
    informations->setWindowFlags(Qt::SubWindow);
    informations->SetCurrentUser(My_F_Address);
    informations->setAdminMode();
    informations->setGeometry(0,0,600,800);
    informations->show();
}

void FriendsLayout::on_Button_show_friends_clicked()
{
    FriendsPage* friends = new FriendsPage;
    friends->setWindowFlags(Qt::SubWindow);
    friends->setAdminMode();
    friends->SetCurrentUser(My_F_Address);
    friends->setGeometry(100,100,900,700);
    friends->show();
}
