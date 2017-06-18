#ifndef HISTORICPAGE_H
#define HISTORICPAGE_H

#include <QWidget>
#include "../include/User.hpp"
#include "layout/historiclayout.h"
#include "layout/friendslayout.h"

namespace Ui {
class HistoricPage;
}

class HistoricPage : public QWidget
{
    Q_OBJECT

public:
    explicit HistoricPage(QWidget *parent = 0);
    ~HistoricPage();

    void SetCurrentUser(User);  //Set the User Active

private:
    Ui::HistoricPage *ui;

    User CurrentUser; //User Active

    //Methods
    void setHistorics();
};

#endif // HISTORICPAGE_H
