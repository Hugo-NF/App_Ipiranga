#ifndef EDITPROFILE_H
#define EDITPROFILE_H

#include <QWidget>
#include "../include/User.hpp"
#include <QDate>

namespace Ui {
class EditProfile;
}

class EditProfile : public QWidget
{
    Q_OBJECT

public:
    explicit EditProfile(QWidget *parent = 0);
    ~EditProfile();

    void SetCurrentUser(User);  //Set the User Active

private slots:
    void on_pushButton_Undo_clicked();      // reset de fields
    void on_pushButton_Save_clicked();      // save the modifications
    void on_pushButton_Delete_clicked();    // delete account
    void on_pushButton_Inactive_clicked();  // inactive account

private:
    Ui::EditProfile *ui;

    User CurrentUser; //User Active

    vector <string> UserDate; //User informations

    string PassConfirm;      //password confirmation

    QDate ExpirationDate;    //date of credit card expiration

    bool Credit, Debit;     //credit or debit?
    bool Payment_active;    //payment method is activated?
    bool Bank_active;       //bank account is activated?

    //Methods
    void SetUserFields();
    bool checkFields();
};

#endif // EDITPROFILE_H
