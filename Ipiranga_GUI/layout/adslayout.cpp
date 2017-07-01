#include "adslayout.h"
#include "ui_adslayout.h"
#include <QMessageBox>
#include "../include/Deals.hpp"

AdsLayout::AdsLayout(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdsLayout)
{
    ui->setupUi(this);
}

AdsLayout::~AdsLayout()
{
    delete ui;
    AdminMode=false;
}

//------------------BUTTONS CLICKED------------------
void AdsLayout::on_Button_delete_clicked()
{
    if(QMessageBox::question(this,tr("Delete AdsLayout"),tr("Are you sure that want to DELETE this Ads?"))
            == QMessageBox::Yes){
        Deals::deleteAd(ID);

        //if is admin only hide, because the structure used delete in another class
        //if is not this object is independent, so his can delete yourself
        if(!AdminMode)
            this->hide();
        else
            this->~AdsLayout();
    }
}

//-----------------SET FUNCTIONS----------------------
void AdsLayout::setAdminMode()
{
    AdminMode=true;
}

void AdsLayout::setDescription(QString text)
{
    ui->text_description->setText(text);
}

void AdsLayout::setTitle(QString title)
{
    ui->Box_Ads->setTitle(title);
}

void AdsLayout::setPrice(QString price)
{
    ui->line_price->setText(price);
}

void AdsLayout::setDate(QString date)
{
    ui->line_date->setText(date);
}

void AdsLayout::setQuantity(QString quantity)
{
    ui->line_quantity->setText(quantity);
}
void AdsLayout::setCategory(QString category){
    ui->line_category->setText(category);
}

void AdsLayout::setID(int id)
{
    ID = id;
}

//------------------GET FUNTIONS---------------------
int AdsLayout::getID(){
    return ID;
}
