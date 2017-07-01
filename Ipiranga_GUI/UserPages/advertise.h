#ifndef ADVERTISE_H
#define ADVERTISE_H

#include <QWidget>
#include "../include/User.hpp"

/**
 * Class Advertise
 * Classe responsável por criar a interface grafica de anuncios e criação de anuncios, exibindo anuncios ativos e permitindo criação de novos anuncios.
 * @Assertivas_estruturais: Esta classe esta diretamente conectada a classe com respectivo nome acrescido de -ui, a qual é responsável pela criação de muitos widgets exibidos ao usuario. Esta classe herda de -ui todos seus atributos e metodos.
 **/

namespace Ui {
class Advertise;
}

class Advertise : public QWidget
{
    Q_OBJECT

public:
    explicit Advertise(QWidget *parent = 0);
    ~Advertise();
    
    /**
     * void SetCurrentUser(User*)
     * Esta função é responsável por atribuir ao atributo CurrentUser o endereço que contem as informações do usuario atual.
     * @Argumento1: Ponteiro do tipo User que contem o endereço das informações do usuario atual.
     */
    void SetCurrentUser(User*);  //Set the User Active

private slots:
    /**
     * void on_text_description_textChanged()
     * Ao identificar mundaçãs na caixa de descrição esta função é chamada, realizando a contagem e limitação da quantidade de caracteres.
     */
    void on_text_description_textChanged(); // count characters on the box
    /**
     * void on_pushButton_create_clicked()
     * Quando o botão de criar é clicado esta funçaõ é chamada, realizando a criação de uma nova transação no BD.
     */
    void on_pushButton_create_clicked();    // create a ads
    /**
     * void on_pushButton_reset_clicked()
     * Quando o botão de reset é clicado esta função é chamada, realizando o reset dos campos de criação de transações.
     */
    void on_pushButton_reset_clicked();     // reset the fields
    /**
     * void on_pushButton_transfer_clicked()
     * Quando o botão de transfer é clicado esta função é chamada, realizando a tranferencia (se possível) do valor informado para a conta cadastrada.
     */
    void on_pushButton_transfer_clicked();

private:
    Ui::Advertise *ui;

    QString Description;    // field description
    User *CurrentUser;   // User Active

    //Sets Methods
    /**
     * void set_ActivesAds()
     * Esta função é responsável por busca no BD e exibir todos os anuncios ativo deste usuario na tela
     */
    void set_ActivesAds();
};

#endif // ADVERTISE_H
