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

    void on_Button_delete_users_clicked();
    void on_Button_delete_transations_clicked();
    void on_Button_delete_historic_clicked();

    void on_line_search_users_textChanged();
    void on_line_search_transation_textChanged();

private:
    Ui::AdminPage *ui;

    int users_size;
    int historics_size;
    int transations_size;

    vector <FriendsLayout*> user_object;
    vector <AdsLayout*> transations_object;
    vector <HistoricLayout*> historic_object;

    //---SET METHODS----
    void setHomePage();

    void setUsers_default();
    void setUsers(vector <User*>);

    void setTransations_default();
    void setTransations(vector <Ads*>);

    void setHistoric_default();
    void setHistoric(vector <Historic*>);

    //-----delete-----
    void deleteUsersObject();
    void deleteTransationsObject();
    void deleteHistoricObject();
};

#endif // ADMINPAGE_H
