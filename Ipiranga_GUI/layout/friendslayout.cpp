#include "friendslayout.h"
#include "ui_friendslayout.h"
#include <QMessageBox>

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

void FriendsLayout::on_Button_delete_clicked()
{
    if(QMessageBox::question(this,tr("Delete Friend"),tr("Are you sure that want to delete this friend?"))
            == QMessageBox::Yes){
        this->~FriendsLayout();
    }
}

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

QString FriendsLayout::getEmail(){
    return ui->label_email->text();
}

void FriendsLayout::setID(int id){
    ID = id;
}

int FriendsLayout::getID(){
    return ID;
}
