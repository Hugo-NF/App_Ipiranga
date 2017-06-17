#ifndef FRIENDSLAYOUT_H
#define FRIENDSLAYOUT_H

#include <QWidget>

namespace Ui {
class FriendsLayout;
}

class FriendsLayout : public QWidget
{
    Q_OBJECT

public:
    explicit FriendsLayout(QWidget *parent = 0);
    ~FriendsLayout();

private:
    Ui::FriendsLayout *ui;
};

#endif // FRIENDSLAYOUT_H
