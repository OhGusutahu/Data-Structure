#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "pilha.h"

int main() {
    setlocale(LC_ALL, "Portuguese");
    TADPilha* tpilha;
    tpilha = cria_pilha();
    char x;

    printf("\nTamanho da pilha: %i",tamanho(tpilha));
    printf("\n\nPilha vazia: %i", vazia(tpilha));

    printf("\n\nInser��o de H: %i", empilha(tpilha, 'H'));
    imprimir(tpilha);
    printf("\n\nInser��o de J: %i", empilha(tpilha, 'J'));
    imprimir(tpilha);

    printf("\n\nRemo��o do topo: %i", desempilha(tpilha,&x));
    printf("\nRemovido: %c", x);
    imprimir(tpilha);

    printf("\n\nInser��o de K: %i", empilha(tpilha, 'K'));
    imprimir(tpilha);

    printf("\n\nRemo��o do topo: %i", desempilha(tpilha,&x));
    printf("\nRemovido: %c", x);
    imprimir(tpilha);

    printf("\n\nInser��o de Y: %i", empilha(tpilha, 'Y'));
    imprimir(tpilha);
    printf("\n\nInser��o de M: %i", empilha(tpilha, 'M'));
    imprimir(tpilha);

    printf("\nTamanho da pilha: %i",tamanho(tpilha));

    esvaziar_pilha(tpilha);
    return 0;
}
