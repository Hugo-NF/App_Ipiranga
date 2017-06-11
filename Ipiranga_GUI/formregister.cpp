#include "formregister.h"
#include "ui_formregister.h"

FormRegister::FormRegister(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormRegister)
{
    ui->setupUi(this);
}

FormRegister::~FormRegister()
{
    delete ui;
}

void FormRegister::on_pushButton_Cancel_clicked()
{
    close();
}
