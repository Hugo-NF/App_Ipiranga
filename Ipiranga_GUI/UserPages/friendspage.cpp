#include "friendspage.h"
#include "ui_friendspage.h"

FriendsPage::FriendsPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FriendsPage)
{
    ui->setupUi(this);
}

FriendsPage::~FriendsPage()
{
    delete ui;
}

//---------------------SET FUNCTIONS--------------------------
void FriendsPage::SetCurrentUser(User _CurrentUser){
    CurrentUser = _CurrentUser;
    setFriends();
}

void FriendsPage::setFriends(){
    vector <User *> Friends;
    int size_v_friends; //size vector friends

    Friends = User::listFriends(CurrentUser.getId(),true,"username",true);
    size_v_friends = Friends.size();

    for(int i=0; i<size_v_friends; i++){
        FriendsLayout *friends_object = new FriendsLayout;

        setFields(friends_object, Friends[i]);

        ui->box_friends->addWidget(friends_object);
    }

    //Friends.~vector();
}

void FriendsPage::setFields(FriendsLayout* friends_object, User* user){
   friends_object->setName(QString::fromStdString(user->getUsername()));
   friends_object->setPhone(QString::fromStdString(user->getPhoneNumber()));
   friends_object->setEmail(QString::fromStdString(user->getEmail()));
   friends_object->setRating(QString::number(user->getRating()));
   friends_object->setID(user->getId());
   friends_object->setID_User(CurrentUser.getId());
}
