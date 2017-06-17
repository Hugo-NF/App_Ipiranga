#include "advertise.h"
#include "ui_advertise.h"
#include <iostream>
#include "layout/ads.h"

using namespace std;

Advertise::Advertise(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Advertise)
{
    ui->setupUi(this);
    Description ="";    //There is nothing in the initial description

    set_ActivesAds();   //Set the Ads Actives on the screen

}

Advertise::~Advertise()
{
    delete ui;
}

void Advertise::SetCurrentUser(User _CurrentUser){
    CurrentUser = _CurrentUser;
}

void Advertise::set_ActivesAds()
{
    for(int i=0; i<5; i++){
        Ads *ads_active = new Ads;
        ads_active->setTitle(QString::number(i));
        ads_active->setPrice("12000.00");
        ui->Ads->addWidget(ads_active);
    }
}

void Advertise::on_text_description_textChanged() //Count of Characters
{
    if(ui->text_description->toPlainText().size() <= 500){
        ui->label_n_character->setText(QString::number(500 - ui->text_description->toPlainText().size()));
        Description = ui->text_description->toPlainText();
    }else{
        ui->label_n_character->setText("0");
        ui->text_description->setText(Description);
    }
}

void Advertise::on_pushButton_create_clicked()
{
    cout << ui->line_price->text().toStdString()<< endl;
}

void Advertise::on_pushButton_reset_clicked()
{
    ui->comboBox_category->setCurrentIndex(0);
    ui->line_title->setText("");
    ui->line_price->setText("");
    ui->spinBox_quantity->setValue(1);
    ui->text_description->setText("");
}
