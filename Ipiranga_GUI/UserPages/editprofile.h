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
    void SetCurrentUser(User);

private slots:
    void on_pushButton_Undo_clicked();

private:
    Ui::EditProfile *ui;

    User CurrentUser;

    //Methods
    void SetUserFields();
};

#endif // EDITPROFILE_H
