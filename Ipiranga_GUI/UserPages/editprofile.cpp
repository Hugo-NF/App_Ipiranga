#include "editprofile.h"
#include "ui_editprofile.h"
#include <QMessageBox>
#include "../include/Account.hpp"
#include "../userapp.h"

EditProfile::EditProfile(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EditProfile)
{
    ui->setupUi(this);

    // Unenable Fields
    ui->lineLogin->setEnabled(false);
    ui->lineCPF->setEnabled(false);
}

EditProfile::~EditProfile()
{
    delete ui;
}

void EditProfile::SetCurrentUser(User _CurrentUser){
    CurrentUser = _CurrentUser;
    SetUserFields();
}

//--------------------------------SET FIELDS------------------------------------
void EditProfile::SetUserFields(){
    QDate ExpirationDate;

    ui->lineFirstName->setText(QString::fromStdString(CurrentUser.getFirstName()));
    ui->lineLastName->setText(QString::fromStdString(CurrentUser.getLastName()));
    ui->lineCPF->setText(QString::fromStdString(CurrentUser.getCPF()));
    ui->lineRG->setText(QString::fromStdString(CurrentUser.getRG()));
    ui->spinAge->setValue(atoi(CurrentUser.getAge().c_str()));
    ui->linePhone->setText(QString::fromStdString(CurrentUser.getPhoneNumber()));

    ui->lineLogin->setText(QString::fromStdString(CurrentUser.getUsername()));
    ui->linePass->setText(QString::fromStdString(CurrentUser.getPassword()));
    ui->lineEmail->setText(QString::fromStdString(CurrentUser.getEmail()));

    ui->lineAdress->setText(QString::fromStdString(CurrentUser.getAddress()));
    ui->lineZIP->setText(QString::fromStdString(CurrentUser.getZipCode()));
    ui->lineState->setText(QString::fromStdString(CurrentUser.getState()));
    ui->lineCity->setText(QString::fromStdString(CurrentUser.getCity()));

    if(CurrentUser.cardRegistered()){
        if(CurrentUser.getCardType()=="Credit")
            ui->radioButton_Credit->setChecked(true);
        else
            ui->radioButton_Debit->setChecked(true);

        ui->lineNamePayment->setText(QString::fromStdString(CurrentUser.getCardName()));
        ui->lineNumber->setText(QString::fromStdString(CurrentUser.getCardNumber()));
        ui->lineSecurity->setText(QString::fromStdString(CurrentUser.getSecurityCode()));

        ExpirationDate.setDate(stoi(CurrentUser.getExpirationDate().substr(0,4)), stoi(CurrentUser.getExpirationDate().substr(5)), 1);

        ui->dateExpiration->setDate(ExpirationDate);
    }

    if(CurrentUser.accountRegistered()){
        ui->lineNameBank->setText(QString::fromStdString(CurrentUser.getAccountNumber()));
        ui->comboBox_Bank->setCurrentText(QString::fromStdString(CurrentUser.getBank()));
        ui->lineAgency->setText(QString::fromStdString(CurrentUser.getAgency()));
        ui->lineAccount->setText(QString::fromStdString(CurrentUser.getAccountNumber()));
    }
}

//------------------------------BUTTONS CLICKED------------------------------------
void EditProfile::on_pushButton_Undo_clicked()
{
    SetUserFields(); // Undo fields
}

void EditProfile::on_pushButton_Save_clicked()
{
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
            Account::updateProfile(this->UserDate,CurrentUser.getId(), this->Payment_active, this->Bank_active);
            QMessageBox::information(this,tr("Register"),tr("Updated with sucess!\n Your changes will take effect on your next login!"));
        }
        catch (char *error){
            QMessageBox::information(this,tr("Register"),tr(error));
        }
    }else
        QMessageBox::warning(this,tr("Register"),tr("Some field is empty \n\nFill in all required Fields!"));
}

void EditProfile::on_pushButton_Delete_clicked()
{
    if(QMessageBox::question(this,tr("Delete Account"),tr("Are you sure that want to DELETE your account?"))
            == QMessageBox::Yes)
    {
        if(QMessageBox::question(this,tr("Delete Account"),tr("Are you REALLY sure that want to DELETE your account?"))
                == QMessageBox::Yes)
        {
            QMessageBox::information(this, tr("Delete Account"),tr("OK, Ok, ok, you win\n We will DELETE you account\n Good Bye :'["));
            try{
                Account::deleteAccount(CurrentUser.getId());
                QMessageBox::information(this,tr("Delete Account"),tr("Your account was deleted with sucess!"));
                system("killall Ipiranga");
            }catch(char* err){
                QMessageBox::warning(this,tr("Delete Account"),tr(err));
            }
        }

    }

}

void EditProfile::on_pushButton_Inactive_clicked()
{
    if(QMessageBox::question(this,tr("Inactive Account"),tr("Are You sure that want to DESABLE your account?"))
            == QMessageBox::Yes)
    {
        try{
            Account::activateAccount(CurrentUser.getId(),false);
            QMessageBox::information(this,tr("Inactive Profile"),tr("Your account was desactivated with sucess!\n"
                                                                    "When you login again, it will be reactivated!"));
            system("killall Ipiranga");
        }catch(char* err){
            QMessageBox::warning(this,tr("Inactive Account"),tr(err));
        }
    }
}

//------------------------------CHECK FIELDS------------------------------------
bool EditProfile::checkFields()
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
