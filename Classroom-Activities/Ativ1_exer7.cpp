#include<iostream>
//#include "bscpp.hpp"
#include<array>

using namespace std;
/* Exerc�cio 7
    An�lise: percorre o arranjo e analisa se est� em ordem n�o decrescente
    Defini��o dos tipos de dados:
        Entrada: vetor de n�meros
        Sa�da: se est� ou n�o em ordem n�o decrescente
    Especifica��o:
        Assinatura:
            int check_naoDecrescente (int vetorValor[], int tam) {
                return 1; // � n�o decrescente
                return 0; // n�o � n�o decrescente
            }
        Prop�sito: analisar se o vetor est� em ordem n�o decrescente
        Exemplos:
            check_expect(check_naoDecrescente({1,2,3,4,5},5),1);
            check_expect(check_naoDecrescente({3,4,4,5,6},5),1);
            check_expect(check_naoDecrescente({2,3,1,5,6},5),0);
        Repeti��o:
            o que ser� calculado em cada execu��o do la�o?
                -
            como as vari�veis ser�o inicializadas?
                -
            como as vari�veis ser�o atualizadas?
                -
*/

int check_naoDecrescente (int vetorValor[], int tam) {
    int anterior = vetorValor[0], decresContagem=0;
    for(int i=0; i<tam; i++) {
        if(anterior <= vetorValor[i]) {
            decresContagem++;
        }
    }
    if(decresContagem == tam) {
        return 1;
    }
    else {
        return 0;
    }
}

//examples{
//    check_expect(check_naoDecrescente({1,2,3,4,5},5),1);
//    check_expect(check_naoDecrescente({3,4,4,5,6},5),1);
//    check_expect(check_naoDecrescente({2,3,1,5,6},5),0);
//}

int main() {
    //run_tests();

    return 0;
}

