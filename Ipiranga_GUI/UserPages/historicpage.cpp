#include "historicpage.h"
#include "ui_historicpage.h"

HistoricPage::HistoricPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HistoricPage)
{
    ui->setupUi(this);
}

HistoricPage::~HistoricPage()
{
    delete ui;
}

//-------------------SET CURRENT USER----------------------
void HistoricPage::SetCurrentUser(User _CurrentUser){
    CurrentUser = _CurrentUser;
    this->addHistorics(true,true);
}

//----------------ADD HISTORICS (OBJECTS)------------------
void HistoricPage::addHistorics(bool asSaler, bool asBuyer){
    vector <Historic *> registers; //Historic of this User

    registers = Historic::retrieveHistoric(CurrentUser.getId(),asSaler,asBuyer);

    Number_historics = registers.size();

    historic.resize(Number_historics);

    for(int i=0; i<Number_historics; i++){
        historic[i] = new HistoricLayout;
        this->setHistoric(registers[i],historic[i]);
    }
}

//------------------------SET FIELDS-----------------------------
void HistoricPage::setHistoric(Historic* log, HistoricLayout *hist){
   hist->setID_user(CurrentUser.getId());
   hist->setHist_Address(log);
   ui->box_historic->addWidget(hist);
}

void HistoricPage::deleteHistorics(HistoricLayout* hist){
    hist->~HistoricLayout();
}

//------------------------BUTTONS CLICKED-----------------------------
void HistoricPage::on_Button_all_clicked()
{
    if(Number_historics!=0){
        for(int i=0; i<Number_historics; i++){
            this->deleteHistorics(historic[i]);
        }
        Number_historics=0;
    }this->addHistorics(true,true);
}


void HistoricPage::on_Button_sales_clicked()
{
    if(Number_historics!=0){
        for(int i=0; i<Number_historics; i++){
            this->deleteHistorics(historic[i]);
        }
        Number_historics=0;
    }this->addHistorics(true,false);
}

void HistoricPage::on_Button_shopping_clicked()
{
    if(Number_historics!=0){
        for(int i=0; i<Number_historics; i++){
            this->deleteHistorics(historic[i]);
        }
        Number_historics=0;
    }this->addHistorics(false,true);
}
