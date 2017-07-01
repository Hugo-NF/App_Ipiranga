#include "friendspage.h"
#include "ui_friendspage.h"

FriendsPage::FriendsPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FriendsPage)
{
    ui->setupUi(this);
    AdminMode=false;
}

FriendsPage::~FriendsPage()
{
    delete ui;
}

//---------------------SET FUNCTIONS--------------------------
void FriendsPage::SetCurrentUser(User* _CurrentUser){
    CurrentUser = _CurrentUser;
    setFriends();
}

void FriendsPage::setAdminMode(){
    AdminMode=true;
}

void FriendsPage::setFriends(){
    vector <User *> Friends;    //friends information
    int size_v_friends;         //size vector friends

    //get the friends information
    Friends = User::listFriends(CurrentUser->getId(),true,"username",true);
    size_v_friends = Friends.size();

    //put on the screen the objects with information about friends
    for(int i=0; i<size_v_friends; i++){
        FriendsLayout *friends_object = new FriendsLayout;

        friends_object->setCurrentUser(CurrentUser);    //set the current user
        friends_object->setMy_F_Address(Friends[i]);    //set address of this frinds informations

        if(AdminMode){
            friends_object->setAdminMode();             //if is admin, set the privileges
        }

        ui->box_friends->addWidget(friends_object);
    }
}
