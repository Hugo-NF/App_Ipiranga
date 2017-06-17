#ifndef ADS_H
#define ADS_H

#include <QWidget>

namespace Ui {
class Ads;
}

class Ads : public QWidget
{
    Q_OBJECT

public:
    explicit Ads(QWidget *parent = 0);
    ~Ads();

    //Sets Methods
    void setDescription(QString);
    void setTitle(QString);
    void setPrice(QString);
    void setDate(QString);
    void setQuantity(QString);

private slots:
    void on_Button_delete_clicked(); // Delete the Ads

private:
    Ui::Ads *ui;
};

#endif // ADS_H
