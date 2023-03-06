#include<iostream>
#include "bscpp.hpp"
// N�o consegui usar a biblioteca, ocorria um erro
#include<array>

using namespace std;
/* Exerc�cio 5
    An�lise: percorrer o vetor e adicionar n na posi��o i
    Defini��o dos tipos de dados:
        Entrada: vetor de n�meros, uma posi��o i e um n�mero n
        Sa�da: vetor de n�mero com o n�mero n adicionado na posi��o i
    Especifica��o:
        Assinatura:
            int add_noVetor (int vetorNum[], int tam, int i, int n) {
                return *vetorAdd;
            }
        Prop�sito: adicionar um n�mero em uma espec�fica posi��o em um vetor
        Exemplos:
            check_expect(add_noVetor({5,6,7,9,3},5,6,11),{5,6,7,9,3,11});
            check_expect(add_noVetor({5,6,7,9,3},5,3,11),{5,6,7,11,9,3});
            check_expect(add_noVetor({4,10,3,8,1},5,1,9),{9,4,10,3,8,1});
        Repeti��o:
            o que ser� calculado em cada execu��o do la�o?
                - comparar a posi��o atual do vetor com uma posi��o i
                - caso forem iguais, inserir um n�mero n nessa posi��o
                - caso n�o, inserir os valores de um vetor chamado nesse vetor
                - utilizar uma vari�vel de �ndice e uma para o vetor chamado
            como as vari�veis ser�o inicializadas?
                - idx = 0, num = 0
            como as vari�veis ser�o atualizadas?
                - idx + 1, num + 1, caso o �ndice for diferente da posi��o i
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

