#include "advertise.h"
#include "ui_advertise.h"

Advertise::Advertise(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Advertise)
{
    ui->setupUi(this);
}

Advertise::~Advertise()
{
    delete ui;
}
