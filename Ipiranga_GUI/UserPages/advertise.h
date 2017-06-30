#ifndef ADVERTISE_H
#define ADVERTISE_H

#include <QWidget>
#include "../include/User.hpp"

namespace Ui {
class Advertise;
}

class Advertise : public QWidget
{
    Q_OBJECT

public:
    explicit Advertise(QWidget *parent = 0);
    ~Advertise();
    void SetCurrentUser(User*);  //Set the User Active

private slots:
    void on_text_description_textChanged(); // count characters on the box
    void on_pushButton_create_clicked();    // create a ads
    void on_pushButton_reset_clicked();     // reset the fields

    void on_pushButton_transfer_clicked();

private:
    Ui::Advertise *ui;

    QString Description;    // field description
    User *CurrentUser;   // User Active

    //Sets Methods
    void set_ActivesAds();
};

#endif // ADVERTISE_H
