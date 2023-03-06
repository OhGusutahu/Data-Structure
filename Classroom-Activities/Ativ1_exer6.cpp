#include<iostream>
//#include "bscpp.hpp"
#include<array>

using namespace std;
/* Exercício 6
    Análise: percorrer o vetor e remover o valor da posição i
    Definição dos tipos de dados:
        Entrada: vetor de números, uma posição i
        Saída: outro vetor sem o número da posição i
    Especificação:
        Assinatura:
            int removeValor (int vetNum[], int tam, int i) {
                return *vetRemoved;
            }
        Propósito: remover o valor de uma posição de um vetor
        Exemplos:
            check_expect(removeValor({3,4,7,6,1},5,2),{3,4,6,1});
            check_expect(removeValor({4,7,9,2,5},5,3),{4,7,9,5});
            check_expect(removeValor({13,34,17,29,21},5,1),{13,17,29,21});
        Repetição:
            o que será calculado em cada execução do laço?
                - comparar a posição atual do vetor com uma posição i
                - caso forem diferentes, inserir os valores de um vetor chamado num novo vetor
                - utilizar uma variável de índice
            como as variáveis serão inicializadas?
                - idx = 0
            como as variáveis serão atualizadas?
                - idx + 1
*/
int removeValor (int vetNum[], int tam, int i) {
    int vetRemoved[tam];
    for(int idx=0; idx<tam; idx++) {
        if(idx != i) {
            vetRemoved[i] = vetNum[i];
        }
    }

    return *vetRemoved;
}

//examples{
//    check_expect(removeValor({3,4,7,6,1},5,2),{3,4,6,1});
//    check_expect(removeValor({4,7,9,2,5},5,3),{4,7,9,5});
//    check_expect(removeValor({13,34,17,29,21},5,1),{13,17,29,21});
//}

int main() {
    //run_tests();

    return 0;
}

