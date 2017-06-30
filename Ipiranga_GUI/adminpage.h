#ifndef ADMINPAGE_H
#define ADMINPAGE_H

#include <QWidget>
#include <QMessageBox>
#include "../include/User.hpp"
#include "../include/Friendship.hpp"
#include "../include/Historic.hpp"
#include "../include/Ads.hpp"
#include "../include/Search.hpp"
#include "layout/friendslayout.h"
#include "layout/historiclayout.h"
#include "layout/adslayout.h"

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

    void on_Button_delete_users_clicked();
    void on_Button_delete_transations_clicked();
    void on_Button_delete_historic_clicked();

private:
    Ui::AdminPage *ui;

    //---SET METHODS----
    void setHomePage();

    void setUsers_default();
    void setUsers(vector <User*>);

    void setTransations_default();
    void setTransations(vector <Ads*>);

    void setHistoric_default();
    void setHistoric(vector <Historic*>);
};

#endif // ADMINPAGE_H
