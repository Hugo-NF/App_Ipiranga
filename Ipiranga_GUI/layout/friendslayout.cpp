#include "friendslayout.h"
#include "ui_friendslayout.h"

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
