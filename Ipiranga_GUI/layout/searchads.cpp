#include "searchads.h"
#include "ui_searchads.h"

SearchAds::SearchAds(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SearchAds)
{
    ui->setupUi(this);
}

SearchAds::~SearchAds()
{
    delete ui;
}
