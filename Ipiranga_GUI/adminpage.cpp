#include "adminpage.h"
#include "ui_adminpage.h"

AdminPage::AdminPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminPage)
{
    ui->setupUi(this);
}

AdminPage::~AdminPage()
{
    delete ui;
}
