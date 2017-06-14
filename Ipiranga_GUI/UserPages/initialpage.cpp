#include "initialpage.h"
#include "ui_initialpage.h"

InitialPage::InitialPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InitialPage)
{
    ui->setupUi(this);
}

InitialPage::~InitialPage()
{
    delete ui;
}
