#include "editprofile.h"
#include "ui_editprofile.h"
#include <QMessageBox>

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

void EditProfile::on_pushButton_Undo_clicked()
{
    SetUserFields(); // Undo fields
}

void EditProfile::on_pushButton_Save_clicked()
{

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
            cout<<"Houuuly Vai Sair"<<endl;
        }

    }

}

void EditProfile::on_pushButton_Inactive_clicked()
{
    if(QMessageBox::question(this,tr("Inactive Account"),tr("Are You sure that want to DESABLE your account?"))
            == QMessageBox::Yes)
    {
        cout<<"Houuuly Vai Passear"<<endl;
    }
}
