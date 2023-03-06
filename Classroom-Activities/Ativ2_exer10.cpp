#include<iostream>
//#include "bscpp.hpp"
#include<array>

using namespace std;
/* Exercício 10
    Análise:
    Definição dos tipos de dados:
        Entrada: vetor de valores inteiros
        Saída: vetor com valores menores antes do valor inicial do vetor da entrada e valores maiores depois
    Especificação:
        Assinatura:
            void menor_inicial_maior (int vet[], int tam) {

            }
        Propósito:
        Exemplos:
            check_expect(menor_inicial_maior({6,5,8,4,9,1,7,3,2},9),{5,2,4,3,1,6,7,9,8});
            check_expect(menor_inicial_maior({3,2,1,4,5,6,7,8,9},9),{2,1,3,4,5,6,7,8,9});
            check_expect(menor_inicial_maior({7,1,2,3,4,5,6,8,9},9),{1,2,3,4,5,6,7,8,9});
        Repetição:
            o que será calculado em cada execução do laço?
                - Se o vetor na posição i é maior ou menor que o vetor de posição 0
            como as variáveis serão inicializadas?
                - int x = vet[0], j=0, aux;
            como as variáveis serão atualizadas?
                - j++ caso o vetor[i] for maior que x
*/

void menor_inicial_maior (int vet[], int tam) {
    int x = vet[0], j=0, aux;
    for(int i=1; i<tam; i++) {
        if(vet[i] > x) {
            aux = vet[tam-j-1];
            vet[tam-j-1] = vet[i];
            vet[i] = aux;
            if(vet[i] < x) {
                aux = vet[i];
                vet[i] = x;
                vet[i-1] = aux;
            }
            j++;
        }
        else if(vet[i] < x) {
            aux = vet[i];
            vet[i] = x;
            vet[i-1] = aux;
        }
    }
}

examples {
    check_expect(menor_inicial_maior({6,5,8,4,9,1,7,3,2},9),{5,2,4,3,1,6,7,9,8});
    check_expect(menor_inicial_maior({3,2,1,4,5,6,7,8,9},9),{2,1,3,4,5,6,7,8,9});
    check_expect(menor_inicial_maior({7,1,2,3,4,5,6,8,9},9),{1,2,3,4,5,6,7,8,9});
}

int main() {
    run_tests();

    return 0;
}
