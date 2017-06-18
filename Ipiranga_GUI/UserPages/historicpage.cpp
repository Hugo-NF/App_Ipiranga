#include "historicpage.h"
#include "ui_historicpage.h"

HistoricPage::HistoricPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HistoricPage)
{
    ui->setupUi(this);
    this->addHistorics();
}

HistoricPage::~HistoricPage()
{
    delete ui;
}

void HistoricPage::SetCurrentUser(User _CurrentUser){
    CurrentUser = _CurrentUser;
}

void HistoricPage::addHistorics(){
    //Fazer a busca pelo historico
    //Adicionar a variavel historic[]
    //setar a quantidade numberHistoric

    QString fields[7];

    fields[0] = "teste1";
    fields[1] = "teste2";
    fields[2] = "teste3";
    fields[3] = "teste4";
    fields[4] = "teste5";
    fields[5] = "teste6";
    fields[6] = "teste7";

    int id_hist=13;
    Number_historics = 5;

    historic.resize(Number_historics);

    for(int i=0; i<Number_historics; i++){
        historic[i] = new HistoricLayout;
        this->setHistoric(id_hist,fields,historic[i]);
    }
}

void HistoricPage::setHistoric(int id_hist, QString *fields, HistoricLayout *hist){
   hist->setSeller(fields[0]);
   hist->setBuyer(fields[1]);
   hist->setCategory(fields[2]);
   hist->setDate(fields[3]);
   hist->setPrice(fields[4]);
   hist->setQuantity(fields[5]);
   hist->setTitle(fields[6]);

   hist->setID(id_hist);

   ui->box_historic->addWidget(hist);
}

void HistoricPage::deleteHistorics(HistoricLayout* hist){
    hist->~HistoricLayout();
}

void HistoricPage::on_Button_all_clicked()
{
    if(Number_historics!=0){
        for(int i=0; i<Number_historics; i++){
            this->deleteHistorics(historic[i]);
        }
        Number_historics=0;
        this->addHistorics();
    }
}
