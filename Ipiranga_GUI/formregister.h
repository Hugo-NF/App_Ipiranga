#ifndef FORMREGISTER_H
#define FORMREGISTER_H

#include <QDialog>
#include <QDate>

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
    void on_pushButton_Cancel_clicked();
    void on_pushButton_Register_clicked();

private:
    Ui::FormRegister *ui;

    //-----VAR FORM FIELDS------

    // Personal Information
    QString FirstName;
    QString LastName;
    QString CPF;
    QString RG;
    int Age;
    QString Phone;

    // Acess
    QString Login;
    QString Password;
    QString Confirm;
    QString Email;

    // Adress
    QString Adress;
    QString Zip;
    QString State;
    QString City;

    // Payment
    bool Payment_active;
    bool Credit;
    bool Debit;
    QString Number;
    QString NSecurity;
    QDate Expiration;

    // Bank Account
    bool Bank_active;
    QString Name_account;
    QString Bank;
    QString Agency;
    QString N_Account;

    //---------END FORM FIELDS-------------

    //----------METHODS FORM----------------
    bool checkFields();
    void sendDateFields();
    //--------END METHODS FORM--------------

};

#endif // FORMREGISTER_H
