#include "advertise.h"
#include "ui_advertise.h"
#include <iostream>
#include "layout/adslayout.h"
#include "../include/Deals.hpp"
#include <QMessageBox>
#include "../include/Payment.hpp"
#include "../include/Search.hpp"

using namespace std;

Advertise::Advertise(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Advertise)
{
    ui->setupUi(this);
    Description ="";    //Attributes to Description the value initial
}

Advertise::~Advertise()
{
    delete ui;
}

void Advertise::SetCurrentUser(User* _CurrentUser){
    CurrentUser = _CurrentUser;

    //Set the unique fields existent (balance)
    ui->line_balance->setText(QString::number(CurrentUser->getBalance()));

    set_ActivesAds();   //Set the Ads Actives on the screen
}

//-----------------SET ADS---------------------
void Advertise::set_ActivesAds()
{
    vector <Ads*> fields;           //ads informations of this users
    vector <string> criteria(1);    //criteria of Search
    vector <string> keyword(1);     //keyword of Search
    int size;
    Search parameters(CurrentUser->getId());

    //set te parameters and make the Search of ads for current user
    parameters.enableFilters(true);
    criteria[0] = "seller";
    keyword[0] = CurrentUser->getUsername();
    parameters.setCriterias(criteria);
    parameters.setKeywords(keyword);
    fields = Search::adsSearch(&parameters);

    size = fields.size();

    //put on the screen all returned on the Search
    for(int i=0; i<size; i++){
        AdsLayout *ads_active = new AdsLayout;
        ads_active->setID(fields[i]->getId());
        ads_active->setTitle(QString::fromStdString(fields[i]->getTitle()));
        ads_active->setCategory(QString::fromStdString(fields[i]->getCategory()));
        ads_active->setPrice(QString::number(fields[i]->getPrice()));
        ads_active->setDate(QString::fromStdString(fields[i]->getDate()));
        ads_active->setQuantity(QString::number(fields[i]->getAmount()));
        ads_active->setDescription(QString::fromStdString(fields[i]->getDescription()));
        ui->Ads->addWidget(ads_active);
    }
}

//------------------SENSITIVE TEXT------------------
void Advertise::on_text_description_textChanged() //Count of Characters
{
    //count and limit the quantity of characters digited on the Description field
    if(ui->text_description->toPlainText().size() <= 500){
        ui->label_n_character->setText(QString::number(500 - ui->text_description->toPlainText().size()));
        Description = ui->text_description->toPlainText();
    }else{
        ui->label_n_character->setText("0");
        ui->text_description->setText(Description);
    }
}

//------------------BUTTONS CLICKED------------------
void Advertise::on_pushButton_create_clicked()
{
    vector <string> Fields(3);  //information of ads
    double price;
    int quantity;

    //get the information of ads
    Fields[0] = ui->comboBox_category->currentText().toStdString();
    Fields[1] = ui->line_title->text().toStdString();
    Fields[2] = ui->text_description->toPlainText().toStdString();

    price = stod(ui->line_price->text().toStdString());
    quantity = ui->spinBox_quantity->value();

    try{
        //send to BD the ad created
        Deals::createAd(CurrentUser,Fields,price,quantity);
        QMessageBox::information(this,tr("Create Advertisement"),
                                 tr("Created with sucess!\nplease login again to see the modification"));
        on_pushButton_reset_clicked();
    }catch(char *err){
        QMessageBox::warning(this,tr("Create Advertisement"),tr(err));
    }
}

void Advertise::on_pushButton_reset_clicked()
{
    //clean all the fields of 'creatAds'
    ui->comboBox_category->setCurrentIndex(0);
    ui->line_title->setText("");
    ui->line_price->setText("");
    ui->spinBox_quantity->setValue(1);
    ui->text_description->setText("");
}

void Advertise::on_pushButton_transfer_clicked()
{
    char box[1000]; //message to user about you account

    if(CurrentUser->accountRegistered()){

        sprintf(box, "Do you confirm the transference to the following account?"
                     "\nBank: %s"
                     "\nAccount No: %s"
                     "\nAgency: %s "
                     "\nTo change this account, please, edit on your profile\n",
                CurrentUser->getBank().c_str(), CurrentUser->getAccountNumber().c_str(), CurrentUser->getAgency().c_str());
    }else{
        QMessageBox::warning(this,tr("Transference"),tr("You don't have any account registered!\n"
                                                        "Please register someone in Profile Edit"));
        return;
    }


    if(ui->line_transfer->text() != ".00" &&
            QMessageBox::question(this,tr("Transference"),tr(box)) == QMessageBox::Yes){
        try{
            //this function make the transference
            Payment::withdrawBalance(CurrentUser,stod(ui->line_transfer->text().toStdString()));
            QMessageBox::information(this,tr("Transference"),tr("Completed with sucess!\n The tax of 0,38%, were already debited!"));
        }catch(char *err){
            QMessageBox::warning(this,tr("Transference"),tr(err));
        }
    }
}
