#include "historiclayout.h"
#include "ui_historiclayout.h"

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

void HistoricLayout::setID(int id){
    ID=id;
}

int HistoricLayout::getId(){
    return ID;
}
