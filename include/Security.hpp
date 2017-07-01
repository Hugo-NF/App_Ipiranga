#ifndef APP_IPIRANGA_PAYMENT_HPP
#define APP_IPIRANGA_PAYMENT_HPP

#include "User.hpp"
#include <cctype>
#define CARD_INFO_MISMATCH "Inconsistent credit card information"
#define INVALID_CPF "Invalid CPF number"
#define PROFANITY_FILTER "Your advertisement is in disagreement with our terms of use"

/**
 * Class Security
 * Define metodos estáticos que serão chamados para validação da inserção de registros na DB
 * @Assertivas_estruturais: Todas os metodos dessa classe realizam operações atômicas, consistentes, isoladas e duráveis(ACID).Propriedade herdada do sqlite.
 */
class Security{
public:
    /**
     * void verifyCPF(const char *);
     * Realiza a rotina mod 11 no CPF
     * @Hipotese: o parametro do tipo const char* conterá uma string com o CPF do usuário
     * @Argumento1: const char * com o numero do CPF
     * @throws: @InvalidEntry pode lançar mensagem de campo CPF inválido
     */
    static void verifyCPF(const char *);
    /**
     * void verifyCard(User *);
     * Confere os digitos do cartão informado e atribui a qual operadora este pertence
     * @Hipotese: User* é um ponteiro para um objeto válido e com atributos setados
     * @Argumento1: Usuario a ser validado
     * @throws: @InvalidEntry pode lancar uma mensagem de campo Cartão inválido
     */
    static void verifyCard(User *);
    /**
     * void filter(Ads *);
     * Confere a presença de palavras bloqueadas em um anuncio
     * @Hipotese: Ads* é um ponteiro para um objeto válido e com atributos setados
     * @Argumento1: Anuncio a ser validado
     * @throws: @InvalidEntry pode lançar uma mensagem de anúncio recusado
     */
    static void filter(Ads *);
};

#endif //APP_IPIRANGA_PAYMENT_HPP
