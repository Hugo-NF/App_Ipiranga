#ifndef LOGINUSER_H
#define LOGINUSER_H

#include "userapp.h"
#include "formregister.h"
#include <QMainWindow>

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
    void on_pushLogin_clicked();

    void on_pushRegister_clicked();

private:
    Ui::LoginUser *ui;
    UserApp *userapp;
    FormRegister *formregister;
};

#endif // LOGINUSER_H
