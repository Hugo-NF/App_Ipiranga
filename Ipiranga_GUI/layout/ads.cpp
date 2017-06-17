#include "ads.h"
#include "ui_ads.h"
#include <QMessageBox>

Ads::Ads(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ads)
{
    ui->setupUi(this);
}

Ads::~Ads()
{
    delete ui;
}

void Ads::on_Button_delete_clicked()
{
    if(QMessageBox::question(this,tr("Delete Ads"),tr("Are you sure that want to DELETE this Ads?"))
            == QMessageBox::Yes){
        this->~Ads();
    }
}

void Ads::setDescription(QString text)
{
    ui->text_description->setText(text);
}
void Ads::setTitle(QString title)
{
    ui->Box_Ads->setTitle(title);
}
void Ads::setPrice(QString price)
{
    ui->line_price->setText(price);
}
void Ads::setDate(QString date)
{
    ui->line_date->setText(date);
}
void Ads::setQuantity(QString quantity)
{
    ui->line_quantity->setText(quantity);
}
