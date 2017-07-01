#ifndef AdsLayout_H
#define AdsLayout_H

#include <QWidget>

namespace Ui {
class AdsLayout;
}

/**
 * Class SerachFriends
 * Classe responsável por criar a interface grafica para exibição de informações de um unico anuncio. Permitindo excluir o anuncio em qualquer hora.
 * @Assertivas_estruturais: Esta classe esta diretamente conectada a classe com respectivo nome acrescido de -ui, a qual é responsável pela criação de muitos widgets exibidos ao usuario. Esta classe herda de -ui todos seus atributos e metodos.
 **/

class AdsLayout : public QWidget
{
    Q_OBJECT

public:
    explicit AdsLayout(QWidget *parent = 0);
    ~AdsLayout();

    //Sets and Get Methods
    void setAdminMode();
    void setDescription(QString);
    void setTitle(QString);
    void setPrice(QString);
    void setDate(QString);
    void setQuantity(QString);
    void setCategory(QString);
    void setID(int);
    int getID();

private slots:
    void on_Button_delete_clicked(); // Delete the AdsLayout

private:
    Ui::AdsLayout *ui;
    int ID; // id ads
    bool AdminMode;
};

#endif // AdsLayout_H
