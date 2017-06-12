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
    //--------GET VALUE FROM FORM FIELDS-------
    // Personal Information
    FirstName = ui->lineFirstName->text();
    LastName = ui->lineLastName->text();
    CPF = ui->lineCPF->text();
    RG = ui->lineRG->text();
    Age = ui->spinAge->value();
    Phone = ui->linePhone->text();

    // Acess
    Login = ui->lineLogin->text();
    Password = ui->linePass->text();
    Confirm = ui->lineConfirm->text();
    Email = ui->lineEmail->text();

    // Adress
    Adress = ui->lineAdress->text();
    Zip = ui->lineZIP->text();
    State = ui->lineState->text();
    City = ui->lineCity->text();

    // Payment
    Credit = ui->radioButton_Credit->isChecked();
    Debit = ui->radioButton_Debit->isChecked();
    Number = ui->lineNumber->text();
    NSecurity = ui->lineSecurity->text();
    Expiration = ui->dateExpiration->date();

    // Bank Account
    Name_account = ui->lineNamePayment->text();
    Bank = ui->comboBox_Bank->currentText();
    Agency = ui->lineAgency->text();
    N_Account = ui->lineAccount->text();
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
    check *= !FirstName.isEmpty() * !LastName.isEmpty() * !CPF.isEmpty()
              * !RG.isEmpty() * !Phone.isEmpty();

    //Acess - IsEmpty?
   check *= !Login.isEmpty() * !Password.isEmpty()
              * !Confirm.isEmpty() * !Email.isEmpty();

    //Adress - IsEmpty?
    check *= !Adress.isEmpty() * !Zip.isEmpty()
              * !State.isEmpty() * !City.isEmpty();

    //Payment - IsEmpty?

    //Bank Account - IsEmpty?

    if(Password!=Confirm){
        check = false;
        QMessageBox::warning(this,tr("Fields"),tr("Passoword confirmation incorrect!"));
    }

    return check;
}
