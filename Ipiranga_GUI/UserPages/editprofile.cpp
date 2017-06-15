#include "editprofile.h"
#include "ui_editprofile.h"

EditProfile::EditProfile(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EditProfile)
{
    ui->setupUi(this);
}

EditProfile::~EditProfile()
{
    delete ui;
}

void EditProfile::SetCurrentUser(User _CurrentUser){
    CurrentUser = _CurrentUser;
    SetUserFields();

    // Unenable Fields
    ui->lineLogin->setEnabled(false);
    ui->lineCPF->setEnabled(false);
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
