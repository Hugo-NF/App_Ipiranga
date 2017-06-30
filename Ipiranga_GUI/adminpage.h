#ifndef ADMINPAGE_H
#define ADMINPAGE_H

#include <QWidget>
#include "../include/User.hpp"
#include "layout/friendslayout.h"

namespace Ui {
class AdminPage;
}

class AdminPage : public QWidget
{
    Q_OBJECT

public:
    explicit AdminPage(QWidget *parent = 0);
    ~AdminPage();

private slots:
    void on_Button_search_users_clicked();
    void on_line_search_users_returnPressed();

    void on_line_search_transation_returnPressed();

    void on_Button_search_transation_clicked();

    void on_line_search_historics_returnPressed();

    void on_Button_search_historics_clicked();

private:
    Ui::AdminPage *ui;

    //---SET METHODS----
    void setUsers_default();
    void setUsers(vector <User*>);
};

#endif // ADMINPAGE_H
