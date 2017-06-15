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

private:
    Ui::Advertise *ui;
};

#endif // ADVERTISE_H
