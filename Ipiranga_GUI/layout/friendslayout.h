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

    //Sets and Get Methods
    void setName(QString);
    void setPhone(QString);
    void setEmail(QString);
    void setRating(QString);
    void setID(int);
    int getID();
    QString getEmail();


private slots:
    void on_Button_delete_clicked();    //delete friends

private:
    Ui::FriendsLayout *ui;
    int ID; //id friends
};

#endif // FRIENDSLAYOUT_H
