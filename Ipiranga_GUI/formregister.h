#ifndef FORMREGISTER_H
#define FORMREGISTER_H

#include <QDialog>
#include <QDate>
#include "../include/Account.hpp"
#include <string>

namespace Ui {
class FormRegister;
}

class FormRegister : public QDialog
{
    Q_OBJECT

public:
    explicit FormRegister(QWidget *parent = 0);
    ~FormRegister();

private slots:
    void on_pushButton_Cancel_clicked();    //Cancel Button
    void on_pushButton_Register_clicked();  //Register Button

private:
    Ui::FormRegister *ui;

    vector <string> UserDate; //User informations

    string PassConfirm;      //password confirmation

    QDate ExpirationDate;    //date of credit card expiration

    bool Credit, Debit;     //credit or debit?
    bool Payment_active;    //payment method is activated?
    bool Bank_active;       //bank account is activated?


    //-----VAR FORM FIELDS------

    /* Personal Information
    UserDate[0] = FirstName;
    UserDate[1] = LastName;
    UserDate[2] = CPF;
    UserDate[3] = RG;
    UserDate[4] = Age;
    UserDate[5] = Phone;*/

    /* Acess
    UserDate[6] = Login;
    UserDate[7] = Password;
    UserDate[8] = Confirm;
    UserDate[9] = Email;*/

    /* Adress
    UserDate[10] = Adress;
    UserDate[11] = Zip;
    UserDate[12] = State;
    UserDate[13] = City;*/

    /* Payment
    bool Payment_active;
    UserDate[14] = Credit;
     or
    UserDate[14] = Debit;
    UserDate[15] = Number;
    UserDate[16] = NSecurity;
    UserDate[17] = Expiration;*/

    /* Bank Account
    bool Bank_active;
    UserDate[18] = Name_account;
    UserDate[19] = Bank;
    UserDate[20] = Agency;
    UserDate[21] = N_Account;*/

    //---------END FORM FIELDS-------------

    // Methods
    bool checkFields();
};

#endif // FORMREGISTER_H
