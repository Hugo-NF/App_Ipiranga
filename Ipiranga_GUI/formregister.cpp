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
    this->~FormRegister();  // Eliminate the Form Register
}

void FormRegister::on_pushButton_Register_clicked()
{
    User NewUser(0);             //User constructed with the form fields
    this->UserDate.resize(21);  //Dates of the User based on the form fields

    //--------GET VALUE FROM FORM FIELDS-------
    // Personal Information
    this->UserDate[0] = ui->lineFirstName->text().toStdString();
    this->UserDate[1] = ui->lineLastName->text().toStdString();
    this->UserDate[2] = ui->lineCPF->text().toStdString();
    this->UserDate[3] = ui->lineRG->text().toStdString();
    this->UserDate[4] = to_string(ui->spinAge->value());
    this->UserDate[5] = ui->linePhone->text().toStdString();

    // Acess
    this->UserDate[6] = ui->lineLogin->text().toStdString();
    this->UserDate[7] = ui->linePass->text().toStdString();
    this->PassConfirm = ui->lineConfirm->text().toStdString();
    this->UserDate[8] = ui->lineEmail->text().toStdString();

    // Adress
    this->UserDate[9] = ui->lineAdress->text().toStdString();
    this->UserDate[10] = ui->lineZIP->text().toStdString();
    this->UserDate[11] = ui->lineState->text().toStdString();
    this->UserDate[12] = ui->lineCity->text().toStdString();

    // Payment
    this->Credit = ui->radioButton_Credit->isChecked();
    this->Debit = ui->radioButton_Debit->isChecked();
    this->UserDate[14] = ui->lineNumber->text().toStdString();
    this->UserDate[15] = ui->lineSecurity->text().toStdString();
    this->ExpirationDate = ui->dateExpiration->date();

    // Bank Account
    this->UserDate[17] = ui->lineNamePayment->text().toStdString();
    this->UserDate[18] = ui->comboBox_Bank->currentText().toStdString();
    this->UserDate[19] = ui->lineAgency->text().toStdString();
    this->UserDate[20] = ui->lineAccount->text().toStdString();
    //-------------END GET VALUES--------------

    //-----------CALL METHODS--------------
    if(this->checkFields()){        // Check the fields of the form
        try{
            // Register a new user on the BD
            NewUser.registerUser(this->UserDate, this->Payment_active, this->Bank_active);
            QMessageBox::information(this,tr("Register"),tr("Registered with sucess!\n You will receive a confirmation in your E-mail!"));
            this->~FormRegister();  // Eliminate the Form Register
        }
        catch (char *error){
            QMessageBox::information(this,tr("Register"),tr(error));
        }
    }else
        QMessageBox::warning(this,tr("Register"),tr("Some field is empty \n\nFill in all required Fields!"));
}

bool FormRegister::checkFields()
{
    bool check=true;              //Set to true check fields
    this->Bank_active = true;     //Set to true bank account activation
    this->Payment_active = true;  //Set to true method payment activation

    //Personal Information - empty?
    check *= !this->UserDate[0].empty() * !this->UserDate[1].empty() * !this->UserDate[2].empty()
              * !this->UserDate[3].empty() * !this->UserDate[5].empty();

    //Acess - empty?
   check *= !this->UserDate[6].empty() * !this->UserDate[7].empty()
              * !this->UserDate[8].empty();

    //Adress - empty?
    check *= !this->UserDate[9].empty() * !this->UserDate[10].empty()
              * !this->UserDate[11].empty() * !this->UserDate[12].empty();

    //Payment - empty?
    this->Payment_active *= (this->Credit || this->Debit)
                            * !this->UserDate[14].empty() * !this->UserDate[15].empty();

    //CreditCard is active?
    if(!this->Payment_active){
        for(int i=13; i<=16; i++)
            this->UserDate[i]="empty";
    }else{
        //Whitch card operation?
        if(this->Credit){
            this->UserDate[13] = "Credit";
        }else if(this->Debit){
            this->UserDate[13] = "Debit";
        }

        //Witch expiration date?
        this->UserDate[16] = to_string(ExpirationDate.year());
        this->UserDate[16].append("/");
        this->UserDate[16].append(to_string(ExpirationDate.month()));
    }

    //Bank Account - empty?
    this->Bank_active *= !this->UserDate[17].empty() * !this->UserDate[18].empty()
                       *!this->UserDate[19].empty() * !this->UserDate[20].empty();

    //BankAccount is active?
    if(!this->Bank_active){
        for (int i=17; i<=20; i++)
            this->UserDate[i]="empty";
    }

    //Password confirmation is correct?
    if(this->UserDate[7]!=this->PassConfirm){
        check = false;
        QMessageBox::warning(this,tr("Fields"),tr("Password confirmation incorrect!"));
    }

    return check;
}
