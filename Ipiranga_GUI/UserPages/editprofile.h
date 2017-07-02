#ifndef EDITPROFILE_H
#define EDITPROFILE_H

#include <QWidget>
#include "../include/User.hpp"
#include <QDate>

/**
 * @abstract Class EditProfile\n
 * Classe responsável por criar a interface grafica da pagina de edição de perfil, exibindo informações e permitindo alterações na conta.\n
 * @warning : Esta classe esta diretamente conectada a classe com respectivo nome acrescido de -ui, a qual é responsável pela criação de muitos widgets exibidos ao usuario. Esta classe herda de -ui todos seus atributos e metodos.
 **/

namespace Ui {
class EditProfile;
}

class EditProfile : public QWidget
{
    Q_OBJECT

public:
    explicit EditProfile(QWidget *parent = 0);
    ~EditProfile();

    /**
     * @addindex void setAdminMode()
     * Esta função é responsável por tornar todos os campos não editaveis, permitindo ao administrados somente, visualizar, deletar e inativar as informações do usuario em questão.
     */
    void setAdminMode();         //Set fields to admin
    /**
     * @addindex void SetCurrentUser(User*)
     * Esta função é responsável por atribuir ao atributo CurrentUser o endereço que contem as informações do usuario atual.
     */
    void SetCurrentUser(User*);  //Set the User Active
    /**
     * @addindex void SetFather(QWidget *)
     * Esta função é responsável por atribuir ao atributo Father, o endereço do objeto que deu origim a este. Permitindo chamada do objeto chamador no futuro.
     */
    void SetFather(QWidget *);

private slots:
    /**
     * @addindex void on_pushButton_Undo_clicked()
     * Quando o botão undo é clicado esta função é chamada, realizando o resetamento de todos os campos que contem informações do usuario.
     */
    void on_pushButton_Undo_clicked();      // reset de fields
    /**
     * @addindex void on_pushButton_Save_clicked()
     * Quando o botão save é clicado esta fução é chamada, realizando o arquivamento no BD.
     */
    void on_pushButton_Save_clicked();      // save the modifications
    /**
     * @addindex void on_pushButton_Delete_clicked()
     * Quando o botão delete é clicado esta função é chamada, realizando a exclusão permanente da conta em questão.
     */
    void on_pushButton_Delete_clicked();    // delete account
    /**
     * @addindex void on_pushButton_Inactive_clicked()
     * Quando o botão inactive é clicado esta função é chamada, realizando a inativação da conta em questão.
     */
    void on_pushButton_Inactive_clicked();  // inactive account

private:
    Ui::EditProfile *ui;

    QWidget *Father;    //Adress of parent object

    User *CurrentUser; //User Active

    vector <string> UserDate; //User informations

    string PassConfirm;      //password confirmation

    QDate ExpirationDate;    //date of credit card expiration

    bool Credit, Debit;     //credit or debit?
    bool Payment_active;    //payment method is activated?
    bool Bank_active;       //bank account is activated?

    //Methods
    /**
     * @addindex void SetUserFields()
     * Esta função é responsável por preencher todos os campos do formulario com iinformações do usuario atual.
     */
    void SetUserFields();
    /**
     * @addindex bool checkFields()
     * Esta função é responsável por chegar os campos do formulario.
     * @arg 1: Boleano que indica se os campos foram preenchidos conforme esperado, retornando true caso verdadeiro e false em outro caso.
     */
    bool checkFields();
};

#endif // EDITPROFILE_H
