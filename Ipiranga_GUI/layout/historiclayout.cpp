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

void HistoricLayout::setHist_Address(Historic* hist){
    HistAdress = hist;
    this->setFields();
}

void HistoricLayout::setID_user(int id_user){
    ID_CurrentUser = id_user;
}

void HistoricLayout::setAdminMode(){
    ui->radio_1->setEnabled(false);
    ui->radio_2->setEnabled(false);
    ui->radio_3->setEnabled(false);
    ui->radio_4->setEnabled(false);
    ui->radio_5->setEnabled(false);
}

void HistoricLayout::setFields(){
    this->setSeller(QString::fromStdString(HistAdress->getSellerUsername()));
    this->setBuyer(QString::fromStdString(HistAdress->getBuyerUsername()));
    this->setCategory(QString::fromStdString(HistAdress->getCategory()));
    this->setDate(QString::fromStdString(HistAdress->getDate()));
    this->setPrice(QString::number(HistAdress->getPrice()));
    this->setQuantity(QString::number(HistAdress->getQuantity()));
    this->setTitle(QString::fromStdString(HistAdress->getAdTitle()));
    this->setRating((int)HistAdress->getUserRating(ID_CurrentUser));
}

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

//------------------------------------VOTE CLICK----------------------------------------
void HistoricLayout::on_radio_1_clicked()
{
    HistAdress->evaluate(HistAdress, ID_CurrentUser, 1);
    QMessageBox::information(this,tr("Vote"),tr("You rated this transation with note 1"));
    setRating(1);
}

void HistoricLayout::on_radio_2_clicked()
{
    HistAdress->evaluate(HistAdress, ID_CurrentUser, 2);
    QMessageBox::information(this,tr("Vote"),tr("You rated this transation with note 2"));
    setRating(2);
}

void HistoricLayout::on_radio_3_clicked()
{
    HistAdress->evaluate(HistAdress, ID_CurrentUser, 3);
    QMessageBox::information(this,tr("Vote"),tr("You rated this transation with note 3"));
    setRating(3);
}

void HistoricLayout::on_radio_4_clicked()
{
    HistAdress->evaluate(HistAdress, ID_CurrentUser, 4);
    QMessageBox::information(this,tr("Vote"),tr("You rated this transation with note 4"));
    setRating(4);
}

void HistoricLayout::on_radio_5_clicked()
{
    HistAdress->evaluate(HistAdress, ID_CurrentUser, 5);
    QMessageBox::information(this,tr("Vote"),tr("You rated this transation with note 5"));
    setRating(5);
}
