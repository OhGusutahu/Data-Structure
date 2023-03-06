#include<iostream>
#include "bscpp.hpp"
#include<array>

using namespace std;
/* Exercício 9
    Análise: percorrer dois vetores em ordem crescente e unir os elementos em outro vetor também em ordem crescente
    Definição dos tipos de dados:
        Entrada: dois vetores de números em ordem crescente
        Saída: vetor de números em ordem crescente com os elementos de ambos
    Especificação:
        Assinatura:
            int juntaVetor_crescente (array<int,tam1> vet1, array<int,tam2> vet2) {
                return vetJunto;
            }
        Propósito: juntar dois arranjos, sem perder a ordem crescente
        Exemplos:
            check_expect(juntaVetor_crescente({2,5,7,9,13},{3,7,8,10,12}),{2,3,5,7,7,8,9,10,12,13});
            check_expect(juntaVetor_crescente({1,2,3,4,5},{6,7,8,9,10}),{1,2,3,4,5,6,7,8,9,10});
            check_expect(juntaVetor_crescente({1,3,5,7,9},{2,4,6,8,10}),{1,2,3,4,5,6,7,8,9,10});
        Repetição:
            o que será calculado em cada execução do laço?
                - se o valor de um elemento de posição i do vetor 1 é menor ou não que do vetor 2
            como as variáveis serão inicializadas?
                - array<int,10> vetJunto; int j=0; int k=0;
            como as variáveis serão atualizadas?
                - i++ a cada laço, j++ caso o elementos do vetor 1 for menor (após ser inserido) e k++ da mesma forma que j para o vetor 2
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
                // mas só tem a função e um vetor resposta.
                // Então testei mais diretamente.

                //array<int,5> v1 = {2,5,7,9,13};
                //array<int,5> v2 = {3,7,8,10,12};
                //array<int,10> v3 = juntaVetor_crescente(v1,v2);

    return 0;
}
