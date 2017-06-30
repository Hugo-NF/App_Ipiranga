#ifndef LOGINUSER_H
#define LOGINUSER_H

#include "userapp.h"
#include "formregister.h"
#include <QMainWindow>
#include "adminpage.h"


namespace Ui {
class LoginUser;
}

class LoginUser : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginUser(QWidget *parent = 0);
    ~LoginUser();

private slots:
    void on_pushLogin_clicked();    //Login Button
    void on_pushRegister_clicked(); //Register Button

private:
    Ui::LoginUser *ui;

    UserApp *userapp;               // Widget Home
    AdminPage *adminpage;           // Window Admin page
    FormRegister *formregister;     // Widget Register
};

#endif // LOGINUSER_H
