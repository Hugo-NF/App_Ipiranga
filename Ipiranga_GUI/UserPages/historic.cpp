#include "historic.h"
#include "ui_historic.h"

Historic::Historic(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Historic)
{
    ui->setupUi(this);
}

Historic::~Historic()
{
    delete ui;
}
