#include "searchads.h"
#include "ui_searchads.h"

SearchAds::SearchAds(QWidget *parent, User* _CurrentUser) :
    QWidget(parent),
    ui(new Ui::SearchAds)
{
    ui->setupUi(this);
    CurrentUser = _CurrentUser;
}

SearchAds::~SearchAds()
{
    delete ui;
}
