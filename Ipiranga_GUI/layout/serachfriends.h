#ifndef SERACHFRIENDS_H
#define SERACHFRIENDS_H

#include <QWidget>
#include "../include/User.hpp"
#include "../include/User.hpp"

/**
 * @abstract Class SerachFriends
 * Classe responsável por criar a interface grafica , exibindo informações e permitindo intereções com o programa de forma intuitiva.
 * @warning: Esta classe esta diretamente conectada a classe com respectivo nome acrescido de -ui, a qual é responsável pela criação de muitos widgets exibidos ao usuario.\n
 * @extends Esta classe herda de -ui todos seus atributos e metodos. @endabstract
 **/

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
