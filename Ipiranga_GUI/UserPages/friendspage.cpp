#include "friendspage.h"
#include "ui_friendspage.h"
#include "layout/friendslayout.h"

FriendsPage::FriendsPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FriendsPage)
{
    ui->setupUi(this);
    setFriends();
}

FriendsPage::~FriendsPage()
{
    delete ui;
}

void FriendsPage::SetCurrentUser(User _CurrentUser){
    CurrentUser = _CurrentUser;
}

void FriendsPage::setFriends(){
    for(int i=0; i<6; i++){
        FriendsLayout *friends = new FriendsLayout;
        ui->box_friends->addWidget(friends);
    }
}

void FriendsPage::setFields(User user){

}
