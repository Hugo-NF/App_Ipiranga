#ifndef SEARCHADS_H
#define SEARCHADS_H

#include <QWidget>
#include <QMessageBox>
#include "../include/User.hpp"
#include "../include/Ads.hpp"
#include "../include/Payment.hpp"

/**
 * Class SerachFriends
 * Classe responsável por criar a interface grafica para exibição de informações de um único anuncio retornado em buscas, exibindo informações e permitindo intereções com o programa (comprar) de forma intuitiva.
 * @Assertivas_estruturais: Esta classe esta diretamente conectada a classe com respectivo nome acrescido de -ui, a qual é responsável pela criação de muitos widgets exibidos ao usuario. Esta classe herda de -ui todos seus atributos e metodos.
 **/

namespace Ui {
class SearchAds;
}

class SearchAds : public QWidget
{
    Q_OBJECT

public:
    explicit SearchAds(QWidget *parent = 0,User* _CurrentUser=0);
    ~SearchAds();

    //Sets methods
    void setMyaddress(Ads*);

private slots:
    void on_Button_buy_clicked();

private:
    Ui::SearchAds *ui;
    User *CurrentUser; //User active
    Ads *MyAdsAddress;  //Address current ads

    //Set fields
    void setFields();
    void setDescription(QString);
    void setTitle(QString);
    void setPrice(QString);
    void setSeller(QString);
    void setQuantity(int);
    void setCategory(QString);
    void setRating(double);
};

#endif // SEARCHADS_H
