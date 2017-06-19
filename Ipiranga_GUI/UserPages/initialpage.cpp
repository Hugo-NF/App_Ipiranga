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

//---------------------SET CURRENT USER--------------------------
void InitialPage::SetCurrentUser(User _CurrentUser){
    CurrentUser = _CurrentUser;

    SetFields();
}

//------------------------SET FIELDS-----------------------------
void InitialPage::SetFields()
{
    string name;

    // Make the append twice and convert to QString: (first ++ "" ++ last)-> To QString
    name = CurrentUser.getFirstName();
    name += " ";
    name += CurrentUser.getLastName();

    ui->Name->setText(QString::fromStdString(name));
    ui->CPF->setText(QString::fromStdString(CurrentUser.getCPF()));
    ui->Email->setText(QString::fromStdString(CurrentUser.getEmail()));
    ui->Balance->setText(QString::number(CurrentUser.getBalance()));
}
