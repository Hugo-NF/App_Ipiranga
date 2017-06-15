#ifndef HISTORIC_H
#define HISTORIC_H

#include <QWidget>

namespace Ui {
class Historic;
}

class Historic : public QWidget
{
    Q_OBJECT

public:
    explicit Historic(QWidget *parent = 0);
    ~Historic();

private:
    Ui::Historic *ui;
};

#endif // HISTORIC_H
