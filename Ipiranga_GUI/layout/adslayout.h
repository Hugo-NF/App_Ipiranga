#ifndef AdsLayout_H
#define AdsLayout_H

#include <QWidget>

namespace Ui {
class AdsLayout;
}

class AdsLayout : public QWidget
{
    Q_OBJECT

public:
    explicit AdsLayout(QWidget *parent = 0);
    ~AdsLayout();

    //Sets and Get Methods
    void setDescription(QString);
    void setTitle(QString);
    void setPrice(QString);
    void setDate(QString);
    void setQuantity(QString);
    void setID(int);
    int getID();

private slots:
    void on_Button_delete_clicked(); // Delete the AdsLayout

private:
    Ui::AdsLayout *ui;
    int ID; // id ads
};

#endif // AdsLayout_H
