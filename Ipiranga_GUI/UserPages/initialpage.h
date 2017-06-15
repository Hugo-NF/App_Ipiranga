#ifndef INITIALPAGE_H
#define INITIALPAGE_H

#include <QWidget>
#include "../include/User.hpp"

namespace Ui {
class InitialPage;
}

class InitialPage : public QWidget
{
    Q_OBJECT

public:
    explicit InitialPage(QWidget *parent = 0);
    ~InitialPage();

private:
    Ui::InitialPage *ui;

    User CurrentUser;
};

#endif // INITIALPAGE_H
