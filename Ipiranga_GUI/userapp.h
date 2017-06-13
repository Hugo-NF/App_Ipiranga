#ifndef USERAPP_H
#define USERAPP_H

#include <QMainWindow>
#include"../include/User.hpp"

namespace Ui {
class UserApp;
}

class UserApp : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserApp(QWidget *parent = 0, User* CurrentUser=0);
    ~UserApp();

private:
    Ui::UserApp *ui;
    User* CurrentUser;
};

#endif // USERAPP_H
