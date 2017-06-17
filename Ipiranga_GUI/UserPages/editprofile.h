#ifndef EDITPROFILE_H
#define EDITPROFILE_H

#include <QWidget>
#include "../include/User.hpp"

namespace Ui {
class EditProfile;
}

class EditProfile : public QWidget
{
    Q_OBJECT

public:
    explicit EditProfile(QWidget *parent = 0);
    ~EditProfile();
    void SetCurrentUser(User);  //Set the User Active

private slots:
    void on_pushButton_Undo_clicked();
    void on_pushButton_Save_clicked();
    void on_pushButton_Delete_clicked();
    void on_pushButton_Inactive_clicked();

private:
    Ui::EditProfile *ui;

    User CurrentUser; //User Active

    //Methods
    void SetUserFields();
};

#endif // EDITPROFILE_H
