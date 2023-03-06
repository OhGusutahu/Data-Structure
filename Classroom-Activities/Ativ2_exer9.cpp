#include<iostream>
#include "bscpp.hpp"
#include<array>

using namespace std;
/* Exerc�cio 9
    An�lise: percorrer dois vetores em ordem crescente e unir os elementos em outro vetor tamb�m em ordem crescente
    Defini��o dos tipos de dados:
        Entrada: dois vetores de n�meros em ordem crescente
        Sa�da: vetor de n�meros em ordem crescente com os elementos de ambos
    Especifica��o:
        Assinatura:
            int juntaVetor_crescente (array<int,tam1> vet1, array<int,tam2> vet2) {
                return vetJunto;
            }
        Prop�sito: juntar dois arranjos, sem perder a ordem crescente
        Exemplos:
            check_expect(juntaVetor_crescente({2,5,7,9,13},{3,7,8,10,12}),{2,3,5,7,7,8,9,10,12,13});
            check_expect(juntaVetor_crescente({1,2,3,4,5},{6,7,8,9,10}),{1,2,3,4,5,6,7,8,9,10});
            check_expect(juntaVetor_crescente({1,3,5,7,9},{2,4,6,8,10}),{1,2,3,4,5,6,7,8,9,10});
        Repeti��o:
            o que ser� calculado em cada execu��o do la�o?
                - se o valor de um elemento de posi��o i do vetor 1 � menor ou n�o que do vetor 2
            como as vari�veis ser�o inicializadas?
                - array<int,10> vetJunto; int j=0; int k=0;
            como as vari�veis ser�o atualizadas?
                - i++ a cada la�o, j++ caso o elementos do vetor 1 for menor (ap�s ser inserido) e k++ da mesma forma que j para o vetor 2
*/

int juntaVetor_crescente (array<int,5> vet1, array<int,5> vet2) {
    array<int,10> vetJunto; // Testando vetor em C++
    int j=0, k=0;

    for(int i=0; i<10; i++) {
        if(j==5) {
            for(int t=i; t<10; t++) {
                vetJunto[t] = vet2[k];
                k++;
            }
            break;
        }
        if(k==5) {
            for(int t=i; t<10; t++) {
                vetJunto[t] = vet1[j];
                j++;
            }
            break;
        }
        if((vet1[j] <= vet2[k])&&(j<5)) {
            vetJunto[i] = vet1[j];
            j++;
        }
        else if((vet2[k] < vet1[j])&&(k<5)) {
            vetJunto[i] = vet2[k];
            k++;
        }
    }
    return vetJunto;
}

examples {
    check_expect(juntaVetor_crescente({2,5,7,9,13},{3,7,8,10,12}),{2,3,5,7,7,8,9,10,12,13});
    check_expect(juntaVetor_crescente({1,2,3,4,5},{6,7,8,9,10}),{1,2,3,4,5,6,7,8,9,10});
    check_expect(juntaVetor_crescente({1,3,5,7,9},{2,4,6,8,10}),{1,2,3,4,5,6,7,8,9,10});
}

int main() {
    run_tests();// Tentei rodar os exemplos, mas fala que check_expect tem mais argumentos do que devia,
                // mas s� tem a fun��o e um vetor resposta.
                // Ent�o testei mais diretamente.

                //array<int,5> v1 = {2,5,7,9,13};
                //array<int,5> v2 = {3,7,8,10,12};
                //array<int,10> v3 = juntaVetor_crescente(v1,v2);

    return 0;
}
