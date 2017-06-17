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

    //Sets Methods
    void setDescription(QString);
    void setTitle(QString);
    void setPrice(QString);
    void setDate(QString);
    void setQuantity(QString);

private slots:
    void on_Button_delete_clicked(); // Delete the AdsLayout

private:
    Ui::AdsLayout *ui;
};

#endif // AdsLayout_H
