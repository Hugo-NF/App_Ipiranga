#include "friendslayout.h"
#include "ui_friendslayout.h"
#include <QMessageBox>
#include "../include/Friendship.hpp"

FriendsLayout::FriendsLayout(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FriendsLayout)
{
    ui->setupUi(this);
}

FriendsLayout::~FriendsLayout()
{
    delete ui;
}

//------------------BUTTONS CLICKED------------------
void FriendsLayout::on_Button_delete_clicked()
{
    if(QMessageBox::question(this,tr("Delete Friend"),tr("Are you sure that want to delete this friend?"))
            == QMessageBox::Yes){
        Friendship::removeFriend(ID_User,ID);
        this->~FriendsLayout();
    }
}

//-----------------SET FUNCTIONS---------------------
void FriendsLayout::setName(QString name){
    ui->label_name->setText(name);
}

void FriendsLayout::setPhone(QString phone){
    ui->label_number->setText(phone);
}

void FriendsLayout::setEmail(QString email){
    ui->label_email->setText(email);
}

void FriendsLayout::setRating(QString rating){
    ui->label_rating->setText(rating);
}

void FriendsLayout::setID(int id){
    ID = id;
}

void FriendsLayout::setID_User(int id_user){
    ID_User = id_user;
}
