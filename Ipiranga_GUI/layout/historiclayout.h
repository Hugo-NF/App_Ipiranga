#ifndef HISTORICLAYOUT_H
#define HISTORICLAYOUT_H

#include <QWidget>
#include "../include/User.hpp"

namespace Ui {
class HistoricLayout;
}

class HistoricLayout : public QWidget
{
    Q_OBJECT

public:
    explicit HistoricLayout(QWidget *parent = 0);
    ~HistoricLayout();

    //Sets and Get Methods
    void setSeller(QString);
    void setBuyer(QString);
    void setCategory(QString);
    void setDate(QString);
    void setPrice(QString);
    void setQuantity(QString);
    void setTitle(QString);
    void setRating(int);
    void setID(int);
    void setID_user(int);
    int getId();
    int getId_user();

private slots:
    void on_radio_1_clicked();

    void on_radio_2_clicked();

    void on_radio_3_clicked();

    void on_radio_4_clicked();

    void on_radio_5_clicked();

private:
    Ui::HistoricLayout *ui;
    int ID; //id historics
    int ID_CurrentUser;
};

#endif // HISTORICLAYOUT_H
