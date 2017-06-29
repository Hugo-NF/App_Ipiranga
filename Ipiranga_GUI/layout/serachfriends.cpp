#include "serachfriends.h"
#include "ui_serachfriends.h"
#include <QMessageBox>

SerachFriends::SerachFriends(QWidget *parent, User* _CurrentUser) :
    QWidget(parent),
    ui(new Ui::SerachFriends)
{
    ui->setupUi(this);
    CurrentUser = _CurrentUser;
}

SerachFriends::~SerachFriends()
{
    delete ui;
}

//--------------SET FUNCTIONS------------------
void SerachFriends::setMyaddress(User* address){
    MyUserAddress = address;
    this->setFields();
}

void SerachFriends::setFields(){
    this->setName(QString::fromStdString(MyUserAddress->getUsername()));
    this->setState(QString::fromStdString(MyUserAddress->getState()));
    this->setCity(QString::fromStdString(MyUserAddress->getCity()));
    this->setRating(QString::number(MyUserAddress->getRating()));
}

void SerachFriends::setName(QString name){
    ui->label_name->setText(name);
}

void SerachFriends::setState(QString state){
    ui->label_state->setText(state);
}

void SerachFriends::setCity(QString city){
    ui->label_city->setText(city);
}

void SerachFriends::setRating(QString rating){
    ui->label_rating->setText(rating);
}

void SerachFriends::on_Button_add_clicked()
{
    try{
        Friendship::addAsFriend(CurrentUser->getId(),MyUserAddress->getId());
        QMessageBox::warning(this,tr("Add as Friend"),tr("Add with Success!"));
    }catch(char* err){
        QMessageBox::warning(this,tr("Add as Friend"),tr(err));
    }
}
