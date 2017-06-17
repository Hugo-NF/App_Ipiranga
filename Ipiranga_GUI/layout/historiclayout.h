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

private:
    Ui::HistoricLayout *ui;
};

#endif // HISTORICLAYOUT_H
