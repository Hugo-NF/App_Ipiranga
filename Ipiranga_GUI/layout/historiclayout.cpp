#include "historiclayout.h"
#include "ui_historiclayout.h"
#include <QMessageBox>

HistoricLayout::HistoricLayout(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HistoricLayout)
{
    ui->setupUi(this);
}

HistoricLayout::~HistoricLayout()
{
    delete ui;
}

//-----------------SET FUNCTIONS---------------------
void HistoricLayout::setSeller(QString seller){
    ui->line_seller->setText(seller);
}

void HistoricLayout::setBuyer(QString buyer){
    ui->line_buyer->setText(buyer);
}

void HistoricLayout::setCategory(QString category){
    ui->line_category->setText(category);
}

void HistoricLayout::setDate(QString date){
    ui->line_date->setText(date);
}

void HistoricLayout::setPrice(QString price){
    ui->line_price->setText(price);
}

void HistoricLayout::setQuantity(QString quantity){
    ui->line_quantity->setText(quantity);
}

void HistoricLayout::setTitle(QString title){
    ui->Box_historic->setTitle(title);
}

void HistoricLayout::setRating(int vote){
    if(vote != 0){
        ui->radio_1->setEnabled(false);
        ui->radio_2->setEnabled(false);
        ui->radio_3->setEnabled(false);
        ui->radio_4->setEnabled(false);
        ui->radio_5->setEnabled(false);
        switch (vote) {
        case 1:
            ui->radio_1->setChecked(true);
            break;
        case 2:
            ui->radio_2->setChecked(true);
            break;
        case 3:
            ui->radio_3->setChecked(true);
            break;
        case 4:
            ui->radio_4->setChecked(true);
            break;
        case 5:
            ui->radio_5->setChecked(true);
            break;
        default:
            break;
        }
    }
}

void HistoricLayout::setID_user(int id_user){
    ID_CurrentUser = id_user;
}

void HistoricLayout::setID(int id){
    ID=id;
}

//------------------GET FUNTIONS---------------------
int HistoricLayout::getId(){
    return ID;
}

int HistoricLayout::getId_user(){
    return ID_CurrentUser;
}

//------------------------------------VOTE CLICK----------------------------------------
void HistoricLayout::on_radio_1_clicked()
{
    QMessageBox::information(this,tr("Vote"),tr("You rated this transation with note 1"));
}

void HistoricLayout::on_radio_2_clicked()
{
    QMessageBox::information(this,tr("Vote"),tr("You rated this transation with note 2"));
}

void HistoricLayout::on_radio_3_clicked()
{
    QMessageBox::information(this,tr("Vote"),tr("You rated this transation with note 3"));
}

void HistoricLayout::on_radio_4_clicked()
{
    QMessageBox::information(this,tr("Vote"),tr("You rated this transation with note 4"));
}

void HistoricLayout::on_radio_5_clicked()
{
    QMessageBox::information(this,tr("Vote"),tr("You rated this transation with note 5"));
}
