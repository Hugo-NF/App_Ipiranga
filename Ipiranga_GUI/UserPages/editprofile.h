#ifndef EDITPROFILE_H
#define EDITPROFILE_H

#include <QWidget>

namespace Ui {
class EditProfile;
}

class EditProfile : public QWidget
{
    Q_OBJECT

public:
    explicit EditProfile(QWidget *parent = 0);
    ~EditProfile();

private:
    Ui::EditProfile *ui;
};

#endif // EDITPROFILE_H
