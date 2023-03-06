#include<iostream>
//#include "bscpp.hpp"
#include<array>

using namespace std;
/* Exercício 7
    Análise: percorre o arranjo e analisa se está em ordem não decrescente
    Definição dos tipos de dados:
        Entrada: vetor de números
        Saída: se está ou não em ordem não decrescente
    Especificação:
        Assinatura:
            int check_naoDecrescente (int vetorValor[], int tam) {
                return 1; // é não decrescente
                return 0; // não é não decrescente
            }
        Propósito: analisar se o vetor está em ordem não decrescente
        Exemplos:
            check_expect(check_naoDecrescente({1,2,3,4,5},5),1);
            check_expect(check_naoDecrescente({3,4,4,5,6},5),1);
            check_expect(check_naoDecrescente({2,3,1,5,6},5),0);
        Repetição:
            o que será calculado em cada execução do laço?
                -
            como as variáveis serão inicializadas?
                -
            como as variáveis serão atualizadas?
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

