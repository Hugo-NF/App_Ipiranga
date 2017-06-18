#ifndef SERACHFRIENDS_H
#define SERACHFRIENDS_H

#include <QWidget>

namespace Ui {
class SerachFriends;
}

class SerachFriends : public QWidget
{
    Q_OBJECT

public:
    explicit SerachFriends(QWidget *parent = 0);
    ~SerachFriends();

private:
    Ui::SerachFriends *ui;
};

#endif // SERACHFRIENDS_H
