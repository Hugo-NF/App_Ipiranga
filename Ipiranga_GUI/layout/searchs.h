#ifndef SEARCHS_H
#define SEARCHS_H

#include <QWidget>

namespace Ui {
class Searchs;
}

class Searchs : public QWidget
{
    Q_OBJECT

public:
    explicit Searchs(QWidget *parent = 0);
    ~Searchs();

private:
    Ui::Searchs *ui;
};

#endif // SEARCHS_H
