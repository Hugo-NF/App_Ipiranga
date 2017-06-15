#ifndef FRIENDSPAGE_H
#define FRIENDSPAGE_H

#include <QWidget>

namespace Ui {
class FriendsPage;
}

class FriendsPage : public QWidget
{
    Q_OBJECT

public:
    explicit FriendsPage(QWidget *parent = 0);
    ~FriendsPage();

private:
    Ui::FriendsPage *ui;
};

#endif // FRIENDSPAGE_H
