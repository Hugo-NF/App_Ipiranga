#ifndef HISTORICPAGE_H
#define HISTORICPAGE_H

#include <QWidget>
#include "../include/User.hpp"
#include "layout/historiclayout.h"
#include "../include/Historic.hpp"
#include <vector>

namespace Ui {
class HistoricPage;
}

class HistoricPage : public QWidget
{
    Q_OBJECT

public:
    explicit HistoricPage(QWidget *parent = 0);
    ~HistoricPage();

    void SetCurrentUser(User*);  //Set the User Active

private slots:
    void on_Button_all_clicked();   // ordenation by all

    void on_Button_sales_clicked();

    void on_Button_shopping_clicked();

private:
    Ui::HistoricPage *ui;

    User *CurrentUser; //User Active

    vector <HistoricLayout *> historic;  //historic objects
    int Number_historics;       //Number of objects on the screen

    //Methods
    void addHistorics(bool, bool);
    void setHistoric(Historic*, HistoricLayout*);
    void deleteHistorics(HistoricLayout*);
};

#endif // HISTORICPAGE_H
