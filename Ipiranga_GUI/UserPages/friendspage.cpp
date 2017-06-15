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
