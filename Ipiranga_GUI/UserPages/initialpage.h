#ifndef INITIALPAGE_H
#define INITIALPAGE_H

#include <QWidget>

namespace Ui {
class InitialPage;
}

class InitialPage : public QWidget
{
    Q_OBJECT

public:
    explicit InitialPage(QWidget *parent = 0);
    ~InitialPage();

private:
    Ui::InitialPage *ui;
};

#endif // INITIALPAGE_H
