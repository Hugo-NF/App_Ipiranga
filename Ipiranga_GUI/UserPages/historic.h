#ifndef HISTORIC_H
#define HISTORIC_H

#include <QWidget>
#include "../include/User.hpp"

namespace Ui {
class Historic;
}

class Historic : public QWidget
{
    Q_OBJECT

public:
    explicit Historic(QWidget *parent = 0);
    ~Historic();
    void SetCurrentUser(User);  //Set the User Active

private:
    Ui::Historic *ui;

    User CurrentUser; //User Active
};

#endif // HISTORIC_H
