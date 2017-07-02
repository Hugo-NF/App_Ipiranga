#ifndef APP_IPIRANGA_PAYMENT_HPP
#define APP_IPIRANGA_PAYMENT_HPP

#include "User.hpp"
#include <cctype>
#define CARD_INFO_MISMATCH "Inconsistent credit card information"
#define INVALID_CPF "Invalid CPF number"
#define PROFANITY_FILTER "Your advertisement is in disagreement with our terms of use"

/**
 * @abstract Class Security\n
 * Define metodos estáticos que serão chamados para validação da inserção de registros na DB @endabstract
 */
class Security{
public:
    /**
     * @addindex void verifyCPF(const char *);
     * Realiza a rotina mod 11 no CPF
     * @warning : o parametro do tipo const char* conterá uma string com o CPF do usuário
     * @arg 1: const char * com o numero do CPF
     * @throws : Pode-se lançar mensagem de campo CPF inválido
     */
    static void verifyCPF(const char *);
    /**
     * @addindex void verifyCard(User *);
     * Confere os digitos do cartão informado e atribui a qual operadora este pertence
     * @warning : User* é um ponteiro para um objeto válido e com atributos setados
     * @arg 1: Usuario a ser validado
     * @throws : Pode-se lancar uma mensagem de campo Cartão inválido
     */
    static void verifyCard(User *);
    /**
     * @addindex void filter(Ads *);
     * Confere a presença de palavras bloqueadas em um anuncio
     * @warning : Ads* é um ponteiro para um objeto válido e com atributos setados
     * @arg 1: Anuncio a ser validado
     * @throws : Pode-se lançar uma mensagem de anúncio recusado
     */
    static void filter(Ads *);
};

#endif //APP_IPIRANGA_PAYMENT_HPP
