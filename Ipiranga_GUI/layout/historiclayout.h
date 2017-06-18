#ifndef HISTORICLAYOUT_H
#define HISTORICLAYOUT_H

#include <QWidget>

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
    void setID(int);
    int getId();

private:
    Ui::HistoricLayout *ui;
    int ID; //id historics
};

#endif // HISTORICLAYOUT_H
