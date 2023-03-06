#include<iostream>
//#include "bscpp.hpp"
#include<array>

using namespace std;
/* Exerc�cio 10
    An�lise:
    Defini��o dos tipos de dados:
        Entrada: vetor de valores inteiros
        Sa�da: vetor com valores menores antes do valor inicial do vetor da entrada e valores maiores depois
    Especifica��o:
        Assinatura:
            void menor_inicial_maior (int vet[], int tam) {

            }
        Prop�sito:
        Exemplos:
            check_expect(menor_inicial_maior({6,5,8,4,9,1,7,3,2},9),{5,2,4,3,1,6,7,9,8});
            check_expect(menor_inicial_maior({3,2,1,4,5,6,7,8,9},9),{2,1,3,4,5,6,7,8,9});
            check_expect(menor_inicial_maior({7,1,2,3,4,5,6,8,9},9),{1,2,3,4,5,6,7,8,9});
        Repeti��o:
            o que ser� calculado em cada execu��o do la�o?
                - Se o vetor na posi��o i � maior ou menor que o vetor de posi��o 0
            como as vari�veis ser�o inicializadas?
                - int x = vet[0], j=0, aux;
            como as vari�veis ser�o atualizadas?
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
