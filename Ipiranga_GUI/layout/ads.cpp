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

void Ads::on_pushButton_clicked()
{
    QMessageBox::information(this,"eo q?","EEEEEEeeo qqqqqqqqqqqqqqqqq?");
    this->~Ads();
}

void Ads::contator(int a){
    ui->label->setText(QString::number(a));
}
