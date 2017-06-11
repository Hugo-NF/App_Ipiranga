#ifndef USERAPP_H
#define USERAPP_H

#include <QMainWindow>

namespace Ui {
class UserApp;
}

class UserApp : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserApp(QWidget *parent = 0);
    ~UserApp();

private:
    Ui::UserApp *ui;
};

#endif // USERAPP_H
