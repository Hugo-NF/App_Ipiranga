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
    void contator(int);
    ~Ads();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Ads *ui;
};

#endif // ADS_H
