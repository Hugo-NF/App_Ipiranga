#ifndef SERACHFRIENDS_H
#define SERACHFRIENDS_H

#include <QWidget>
#include "../include/User.hpp"
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

    //Sets methods
    void setMyaddress(User*);

private slots:
    void on_Button_add_clicked();

private:
    Ui::SerachFriends *ui;
    User *CurrentUser; //User active
    User *MyUserAddress;  //Address User (Friend)

    //Set fields
    void setFields();
    void setName(QString);
    void setState(QString);
    void setCity(QString);
    void setRating(QString);
};

#endif // SERACHFRIENDS_H
