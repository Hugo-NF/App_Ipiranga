#ifndef SEARCHRESULT_H
#define SEARCHRESULT_H

#include <QWidget>
#include "../include/User.hpp"

/**
 * Class SearchResult
 * Classe responsável por criar a interface grafica de resultados de busca, exibindo informações e permitindo intereções com o programa de forma intuitiva.
 * @Assertivas_estruturais: Esta classe esta diretamente conectada a classe com respectivo nome acrescido de -ui, a qual é responsável pela criação de muitos widgets exibidos ao usuario. Esta classe herda de -ui todos seus atributos e metodos.
 **/

namespace Ui {
class SearchResult;
}

class SearchResult : public QWidget
{
    Q_OBJECT

public:
    explicit SearchResult(QWidget *parent = 0);
    ~SearchResult();
    /**
     * void SetCurrentUser(User*)
     * Esta função atribui ao atributo CurrentUser o endereço que contem as informações do usuario Atual
     * @Argumento1: Ponteiro do tipo User que contem as informções do usuario atual
     */
    void SetCurrentUser(User*);  //Set the User Active
    /**
     * void set_A_Results(vector <Ads*>)
     * Esta função exibe na tela todos os objetos do tipo AdsLayout, contendo as informações do anuncio
     * @Argumento1: vetor de ponteiros do tipo Ads, contendo informações de varios anuncios retornados em alguma busca por anuncios
     */
    void set_A_Results(vector <Ads*>); //vector that contain the results of search (Ads)
    /**
     * void set_F_Results(vector <User*>)
     * Esta função exibe na tela todos os objetos do tipo FriendsLayout, contendo as informações dos usuarios
     * @Argumento1: vetor de ponteiros do tipo User, contendo informações de varios usuarios retornados em alguma busca por usuarios
     */
    void set_F_Results(vector <User*>);//vector that contain the results of search (Friends)
    /**
     * void setSearchType(bool)
     * Esta funçaõ realiza o setup de qual tipo de pesquisa esta sendo feito;
     * @Argumento1: Boleano que indica o tipo de pesquisa, 1 pesquisa por Usuarios, 0 pesquisa por Anuncios
     */
    void setSearchType(bool);   // 1 to Friends - 0 to Advertise

private:
    Ui::SearchResult *ui;

    User *CurrentUser; //User Active
    bool SearchType; // 1 to Friends - 0 to Advertise
};

#endif // SEARCHRESULT_H
