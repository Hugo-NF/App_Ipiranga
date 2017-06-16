#ifndef ADVERTISE_H
#define ADVERTISE_H

#include <QWidget>

namespace Ui {
class Advertise;
}

class Advertise : public QWidget
{
    Q_OBJECT

public:
    explicit Advertise(QWidget *parent = 0);
    ~Advertise();

private slots:
    void on_text_description_textChanged();
    void on_pushButton_create_clicked();
    void on_pushButton_reset_clicked();

private:
    Ui::Advertise *ui;
    QString Description;

    void set_ActivesAds();
};

#endif // ADVERTISE_H
