#include<iostream>
#include "bscpp.hpp"
// Não consegui usar a biblioteca, ocorria um erro
#include<array>

using namespace std;
/* Exercício 5
    Análise: percorrer o vetor e adicionar n na posição i
    Definição dos tipos de dados:
        Entrada: vetor de números, uma posição i e um número n
        Saída: vetor de número com o número n adicionado na posição i
    Especificação:
        Assinatura:
            int add_noVetor (int vetorNum[], int tam, int i, int n) {
                return *vetorAdd;
            }
        Propósito: adicionar um número em uma específica posição em um vetor
        Exemplos:
            check_expect(add_noVetor({5,6,7,9,3},5,6,11),{5,6,7,9,3,11});
            check_expect(add_noVetor({5,6,7,9,3},5,3,11),{5,6,7,11,9,3});
            check_expect(add_noVetor({4,10,3,8,1},5,1,9),{9,4,10,3,8,1});
        Repetição:
            o que será calculado em cada execução do laço?
                - comparar a posição atual do vetor com uma posição i
                - caso forem iguais, inserir um número n nessa posição
                - caso não, inserir os valores de um vetor chamado nesse vetor
                - utilizar uma variável de índice e uma para o vetor chamado
            como as variáveis serão inicializadas?
                - idx = 0, num = 0
            como as variáveis serão atualizadas?
                - idx + 1, num + 1, caso o índice for diferente da posição i
*/

int add_noVetor (int vetorNum[], int tam, int i, int n) {
    int tam2, num=0;
    tam2 = tam+1;
    int vetorAdd[tam2];
    for(int idx=0; idx<tam2; idx++) {
        if(idx == i) {
            vetorAdd[idx] = n;
        }
        else {
            vetorAdd[idx] = vetorNum[num];
            num++;
        }
    }
    return *vetorAdd;
}

examples{
    check_expect(add_noVetor({5,6,7,9,3},5,6,11),{5,6,7,9,3,11});
    check_expect(add_noVetor({5,6,7,9,3},5,3,11),{5,6,7,11,9,3});
    check_expect(add_noVetor({4,10,3,8,1},5,1,9),{9,4,10,3,8,1});
}

int main() {
    run_tests();

    return 0;
}

