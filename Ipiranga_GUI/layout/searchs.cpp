#include "searchs.h"
#include "ui_searchs.h"

Searchs::Searchs(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Searchs)
{
    ui->setupUi(this);
}

Searchs::~Searchs()
{
    delete ui;
}
