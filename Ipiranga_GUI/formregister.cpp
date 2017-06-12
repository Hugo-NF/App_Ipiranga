#include "formregister.h"
#include "ui_formregister.h"
#include <QMessageBox>
#include <iostream>

using namespace std;

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

void FormRegister::on_pushButton_Register_clicked()
{
    UserDate.resize(21);

    //--------GET VALUE FROM FORM FIELDS-------
    // Personal Information
    UserDate[0] = ui->lineFirstName->text();
    UserDate[1] = ui->lineLastName->text();
    UserDate[2] = ui->lineCPF->text();
    UserDate[3] = ui->lineRG->text();
    Age = ui->spinAge->value();
    UserDate[5] = ui->linePhone->text();

    // Acess
    UserDate[6] = ui->lineLogin->text();
    UserDate[7] = ui->linePass->text();
    UserDate[8] = ui->lineConfirm->text();
    UserDate[9] = ui->lineEmail->text();

    // Adress
    UserDate[10] = ui->lineAdress->text();
    UserDate[11] = ui->lineZIP->text();
    UserDate[12] = ui->lineState->text();
    UserDate[13] = ui->lineCity->text();

    // Payment
    Credit = ui->radioButton_Credit->isChecked();
    Debit = ui->radioButton_Debit->isChecked();
    UserDate[15] = ui->lineNumber->text();
    UserDate[16] = ui->lineSecurity->text();
    ExpirationDate = ui->dateExpiration->date();

    // Bank Account
    UserDate[18] = ui->lineNamePayment->text();
    UserDate[19] = ui->comboBox_Bank->currentText();
    UserDate[20] = ui->lineAgency->text();
    UserDate[21] = ui->lineAccount->text();
    //-------------END GET VALUES--------------

    //-----------CALL METHODS--------------
    if(checkFields())
        QMessageBox::information(this,"Register","Sucesso");
    else
        QMessageBox::warning(this,"Register","Some field is empty \n\nFill in all required Fields!");
}

bool FormRegister::checkFields()
{
    bool check=true;

    //Personal Information - IsEmpty?
    check *= !UserDate[0].isEmpty() * !UserDate[1].isEmpty() * !UserDate[2].isEmpty()
              * !UserDate[3].isEmpty() * !UserDate[5].isEmpty();

    //Acess - IsEmpty?
   check *= !UserDate[6].isEmpty() * !UserDate[7].isEmpty()
              * !UserDate[8].isEmpty() * !UserDate[9].isEmpty();

    //Adress - IsEmpty?
    check *= !UserDate[10].isEmpty() * !UserDate[11].isEmpty()
              * !UserDate[12].isEmpty() * !UserDate[13].isEmpty();

    //Payment - IsEmpty?

    //Bank Account - IsEmpty?

    if(Password!=Confirm){
        check = false;
        QMessageBox::warning(this,tr("Fields"),tr("Passoword confirmation incorrect!"));
    }

    return check;
}
