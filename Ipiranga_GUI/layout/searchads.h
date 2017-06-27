#ifndef SEARCHADS_H
#define SEARCHADS_H

#include <QWidget>
#include <QMessageBox>
#include "../include/User.hpp"
#include "../include/Ads.hpp"
#include "../include/Payment.hpp"

namespace Ui {
class SearchAds;
}

class SearchAds : public QWidget
{
    Q_OBJECT

public:
    explicit SearchAds(QWidget *parent = 0,User* _CurrentUser=0);
    ~SearchAds();

    //Sets methods
    void setMyaddress(Ads*);

private slots:
    void on_Button_buy_clicked();

private:
    Ui::SearchAds *ui;
    User *CurrentUser; //User active
    Ads *MyAdsAddress;  //Address current ads

    //Set fields
    void setFields();
    void setDescription(QString);
    void setTitle(QString);
    void setPrice(QString);
    void setSeller(QString);
    void setQuantity(QString);
    void setCategory(QString);
    void setRating(double);
};

#endif // SEARCHADS_H
