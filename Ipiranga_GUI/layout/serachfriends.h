#ifndef SERACHFRIENDS_H
#define SERACHFRIENDS_H

#include <QWidget>
#include "../include/User.hpp"

namespace Ui {
class SerachFriends;
}

class SerachFriends : public QWidget
{
    Q_OBJECT

public:
    explicit SerachFriends(QWidget *parent = 0,User* _CurrentUser=0);
    ~SerachFriends();

private:
    Ui::SerachFriends *ui;
    User *CurrentUser; //User active
};

#endif // SERACHFRIENDS_H
