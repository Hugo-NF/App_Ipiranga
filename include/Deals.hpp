
#ifndef APP_IPIRANGA_DEALS_HPP
#define APP_IPIRANGA_DEALS_HPP

#include "Ads.hpp"
#include "Security.hpp"


#define DELETE_AD_ERROR "Sorry, we could not delete your ad right now, please try again later"
#define REGISTER_AD_ERROR "Sorry, we could not publish your ad right now, please try again later"
#define MODIFY_AD_ERROR "Sorry, we could not update your ad right now, please try again later"

/**
 * Class Deals
 * Classe responsável por definir métodos estaticos para manipulação dos anúncios
 * @Assertivas_estruturais: Todas os metodos dessa classe realizam operações atômicas, consistentes, isoladas e duráveis(ACID).Propriedade herdada do sqlite.
 * Define a interface para manipulação de anúncios com a camada View
 */

class Deals {
public:
    /**
     * void createAd(User *, vector<string>, double, unsigned int);
     * @Assertivas_entrada: Parâmetro User* define um usuário com todos os campos setados
     * @Argumento1: Objeto da classe usuário, representando o proprietário do anuncio
     * @Argumento2: conteiner vector de strings com os campos capturados na interface de cadastro de anúncio
     * @Argumento3: double contendo o preço setado pelo usuário
     * @Argumento4: inteiro contendo a quantidade setada pelo usuário
     */
    static void createAd(User *, vector<string>, double, unsigned int);
    /**
     * void deleteAd(unsigned int);
     * @Argumento1: inteiro representando o id do anuncio
     */
    static void deleteAd(unsigned int);
    /**
     * void editAd(unsigned int, vector<string>, double, unsigned int);
     * @Argumento1: inteiro contendo o id do anuncio a ser editado
     * @Argumento2: conteiner vector de strings com os campos capturados na interface de edição de anuncio
     * @Argumento3: double contendo o preço setado pelo usuário
     * @Argumento4: inteiro contendo a quantidade setada pelo usuário
     */
    static void editAd(unsigned int, vector<string>, double, unsigned int);
};

#endif //APP_IPIRANGA_ADVERTISE_HPP
