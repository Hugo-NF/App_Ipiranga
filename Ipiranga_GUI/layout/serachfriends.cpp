#include "serachfriends.h"
#include "ui_serachfriends.h"

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
