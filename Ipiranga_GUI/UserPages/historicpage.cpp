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
void HistoricPage::SetCurrentUser(User* _CurrentUser){
    CurrentUser = _CurrentUser;
    this->addHistorics(true,true);
}

//----------------ADD HISTORICS (OBJECTS)------------------
void HistoricPage::addHistorics(bool asSaller, bool asBuyer){
    vector <Historic *> registers; //Historic of this User

    //make a search for historics of this users, where him is buyer, saller, or all
    registers = Historic::retrieveHistoric(CurrentUser->getId(),asSaller,asBuyer);

    Number_historics = registers.size();

    historic.resize(Number_historics);

    //put on the screen the results of the search
    for(int i=0; i<Number_historics; i++){
        historic[i] = new HistoricLayout;
        this->setHistoric(registers[i],historic[i]);
    }
}

//------------------------SET FIELDS-----------------------------
void HistoricPage::setHistoric(Historic* log, HistoricLayout *hist){
    //send to historic object his address and the Id of current user and put on the screen the object
   hist->setID_user(CurrentUser->getId());
   hist->setHist_Address(log);
   ui->box_historic->addWidget(hist);
}

void HistoricPage::deleteHistorics(HistoricLayout* hist){
    hist->~HistoricLayout();
}

//------------------------BUTTONS CLICKED-----------------------------
void HistoricPage::on_Button_all_clicked()
{
    //delete all historics on the screen
    if(Number_historics!=0){
        for(int i=0; i<Number_historics; i++){
            this->deleteHistorics(historic[i]);
        }
        Number_historics=0;
    }this->addHistorics(true,true); //put all the historcs on the screen
}


void HistoricPage::on_Button_sales_clicked()
{
    //delete all historcs on the screen
    if(Number_historics!=0){
        for(int i=0; i<Number_historics; i++){
            this->deleteHistorics(historic[i]);
        }
        Number_historics=0;
    }this->addHistorics(true,false);    //put only historcs as saller
}

void HistoricPage::on_Button_shopping_clicked()
{
    //delete all historcs on the screen
    if(Number_historics!=0){
        for(int i=0; i<Number_historics; i++){
            this->deleteHistorics(historic[i]);
        }
        Number_historics=0;
    }this->addHistorics(false,true);    //put only historcs as buyer
}
