#include "serachfriends.h"
#include "ui_serachfriends.h"

SerachFriends::SerachFriends(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SerachFriends)
{
    ui->setupUi(this);
}

SerachFriends::~SerachFriends()
{
    delete ui;
}
