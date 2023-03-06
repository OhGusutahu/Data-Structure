#include<iostream>
//#include "bscpp.hpp"
#include<array>

using namespace std;
/* Exerc�cio 6
    An�lise: percorrer o vetor e remover o valor da posi��o i
    Defini��o dos tipos de dados:
        Entrada: vetor de n�meros, uma posi��o i
        Sa�da: outro vetor sem o n�mero da posi��o i
    Especifica��o:
        Assinatura:
            int removeValor (int vetNum[], int tam, int i) {
                return *vetRemoved;
            }
        Prop�sito: remover o valor de uma posi��o de um vetor
        Exemplos:
            check_expect(removeValor({3,4,7,6,1},5,2),{3,4,6,1});
            check_expect(removeValor({4,7,9,2,5},5,3),{4,7,9,5});
            check_expect(removeValor({13,34,17,29,21},5,1),{13,17,29,21});
        Repeti��o:
            o que ser� calculado em cada execu��o do la�o?
                - comparar a posi��o atual do vetor com uma posi��o i
                - caso forem diferentes, inserir os valores de um vetor chamado num novo vetor
                - utilizar uma vari�vel de �ndice
            como as vari�veis ser�o inicializadas?
                - idx = 0
            como as vari�veis ser�o atualizadas?
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

