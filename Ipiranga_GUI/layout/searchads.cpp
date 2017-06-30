#include "searchads.h"
#include "ui_searchads.h"

SearchAds::SearchAds(QWidget *parent, User* _CurrentUser) :
    QWidget(parent),
    ui(new Ui::SearchAds)
{
    ui->setupUi(this);
    CurrentUser = _CurrentUser;
}

SearchAds::~SearchAds()
{
    delete ui;
}

//--------------SET FUNCTIONS------------------
void SearchAds::setMyaddress(Ads* address){
    MyAdsAddress = address;
    this->setFields();
}

void SearchAds::setFields(){
    this->setDescription(QString::fromStdString(MyAdsAddress->getDescription()));
    this->setTitle(QString::fromStdString(MyAdsAddress->getTitle()));
    this->setPrice(QString::number(MyAdsAddress->getPrice()));
    this->setSeller(QString::fromStdString(MyAdsAddress->getSellerUsername()));
    this->setQuantity(MyAdsAddress->getAmount());
    this->setCategory(QString::fromStdString(MyAdsAddress->getCategory()));
    this->setRating(MyAdsAddress->getSellerRating());
}

void SearchAds::setRating(double rating){
    ui->lcd_rating->display(rating);
}

void SearchAds::setDescription(QString description){
    ui->text_description->setText(description);
}

void SearchAds::setTitle(QString title){
    ui->Box_Ads->setTitle(title);
}

void SearchAds::setPrice(QString price){
    ui->line_price->setText(price);
}

void SearchAds::setSeller(QString seller){
    ui->line_seller->setText(seller);
}

void SearchAds::setQuantity(int quantity){
    ui->spin_quantity->setValue(1);
    ui->spin_quantity->setMaximum(quantity);
}

void SearchAds::setCategory(QString category){
    ui->line_category->setText(category);
}

void SearchAds::on_Button_buy_clicked()
{
    if(CurrentUser->cardRegistered()){
        try{
            Payment::makePayment(MyAdsAddress,CurrentUser,ui->spin_quantity->value());
            QMessageBox::information(this,tr("Shopping"),tr("Sucess!"));
            this->setQuantity(MyAdsAddress->getAmount());
        }catch(char* err){
            QMessageBox::warning(this,tr("Payment"),tr(err));
        }
    }else{
        QMessageBox::warning(this,tr("Payment"),tr("You don't have any payment method registered, \nplease edit your profile!"));
    }
}
