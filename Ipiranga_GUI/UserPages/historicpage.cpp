#include "historicpage.h"
#include "ui_historicpage.h"

HistoricPage::HistoricPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HistoricPage)
{
    ui->setupUi(this);
    setHistorics();
}

HistoricPage::~HistoricPage()
{
    delete ui;
}

void HistoricPage::SetCurrentUser(User _CurrentUser){
    CurrentUser = _CurrentUser;
}

void HistoricPage::setHistorics(){
    for(int i=0; i<5; i++){
        HistoricLayout *hist = new HistoricLayout;
        ui->box_historic->addWidget(hist);
    }
}
