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
