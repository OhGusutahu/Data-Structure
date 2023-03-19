#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "fila.h"

int main() {
    setlocale(LC_ALL, "Portuguese");
    TADFila* tfila;
    tfila = cria_fila();
    char x;

    printf("\nTamanho da fila: %i",tamanho(tfila));
    printf("\n\nFila vazia: %i", vazia(tfila));

    printf("\n\nEnfileira H: %i", enfileira(tfila, 'H'));
    imprimir(tfila);
    printf("\n\nEnfileira J: %i", enfileira(tfila, 'J'));
    imprimir(tfila);

    printf("\n\nDesenfileira: %i", desenfileira(tfila,&x));
    printf("\nRemovido: %c", x);
    imprimir(tfila);

    printf("\n\nEnfileira K: %i", enfileira(tfila, 'K'));
    imprimir(tfila);

    printf("\n\nDesenfileira: %i", desenfileira(tfila,&x));
    printf("\nRemovido: %c", x);
    imprimir(tfila);

    printf("\n\nEnfileira Y: %i", enfileira(tfila, 'Y'));
    imprimir(tfila);
    printf("\n\nEnfileira M: %i", enfileira(tfila, 'M'));
    imprimir(tfila);

    printf("\nTamanho da fila: %i",tamanho(tfila));

    destroi_fila(tfila);
    return 0;
}

