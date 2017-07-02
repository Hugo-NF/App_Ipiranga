
#ifndef APP_IPIRANGA_DEALS_HPP
#define APP_IPIRANGA_DEALS_HPP

#include "Ads.hpp"
#include "Security.hpp"


#define DELETE_AD_ERROR "Sorry, we could not delete your ad right now, please try again later"
#define REGISTER_AD_ERROR "Sorry, we could not publish your ad right now, please try again later"
#define MODIFY_AD_ERROR "Sorry, we could not update your ad right now, please try again later"

/**
 * @abstract Class Deals\n
 * Classe responsável por definir métodos estaticos para manipulação dos anúncios\n
 * @note: Todas os metodos dessa classe realizam operações atômicas, consistentes, isoladas e duráveis(ACID). Propriedade herdada do sqlite.\n
 * Define a interface para manipulação de anúncios com a camada View @endabstract
 */

class Deals {
public:
    /**
     * @addindex void createAd(User *, vector<string>, double, unsigned int);
     * @arg 1: Objeto da classe usuário, representando o proprietário do anuncio
     * @arg 2: conteiner vector de strings com os campos capturados na interface de cadastro de anúncio
     * @arg 3: double contendo o preço setado pelo usuário
     * @arg 4: inteiro contendo a quantidade setada pelo usuário
     * @warning : Parâmetro User* define um usuário com todos os campos setados
     */
    static void createAd(User *, vector<string>, double, unsigned int);
    /**
     * @addindex void deleteAd(unsigned int);
     * @arg 1: inteiro representando o id do anuncio
     */
    static void deleteAd(unsigned int);
    /**
     * @addindex void editAd(unsigned int, vector<string>, double, unsigned int);
     * @arg 1: inteiro contendo o id do anuncio a ser editado
     * @arg 2: conteiner vector de strings com os campos capturados na interface de edição de anuncio
     * @arg 3: double contendo o preço setado pelo usuário
     * @arg 4: inteiro contendo a quantidade setada pelo usuário
     * @warning : vector<string> estará preenchido com os novos dados do anúncio
     */
    static void editAd(unsigned int, vector<string>, double, unsigned int);
};

#endif //APP_IPIRANGA_ADVERTISE_HPP
