#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

/** Fila Dinâmica com Cabeça **/

typedef struct sNo *ponteiro;

struct sNo{
    char info;
    ponteiro prox;
};

struct Fila{
    ponteiro inicio; // começo da fila
    ponteiro fim; // Fim da fila
    int qtde; // Tamanho da fila
};

TADFila* cria_fila()
{
/**
    Cria a fila inicializando os dados necessários para o gerenciamento da mesma
**/
    TADFila *fila = (TADFila *) malloc(sizeof(TADFila));
    fila->inicio = (ponteiro) malloc(sizeof(struct sNo));
    fila->fim = fila->inicio;
    fila->inicio->prox = fila->fim;
    fila->qtde = 0;
    return fila;
}

int vazia(TADFila* fila)
{
/**
    Retorna "true" se a fila está vazia, caso contrário, retorna "false"
**/
    if(fila->qtde == 0) return 1;
    return 0;
}

int enfileira(TADFila* fila, char x)
{
/**
    Insere o item x no fim da fila
    Retorna 1 em caso de sucesso e 0 em caso da fila estar cheia
**/
    ponteiro novo = (ponteiro) malloc(sizeof(struct sNo));
    novo->info = x;
    fila->fim->prox = novo;
    fila->fim = novo;
    fila->qtde++;
    return 1;
}

int desenfileira(TADFila* fila, char *x)
{
/**
    Retorna o item x no começo da fila, retirando-o da fila
**/
    if(fila->qtde==0) return 0; // fila vazia
    else {
        ponteiro pos = fila->inicio->prox;
        *x = pos->info;
        fila->inicio->prox = pos->prox;
        fila->qtde--;
        return 1;
    }
}

int tamanho(TADFila* fila)
{
/**
    Retorna o número de itens da fila
**/
    return fila->qtde;
}

void imprimir(TADFila* fila)
{
/**
    Imprime a quantidade de elementos, assim como os elementos da fila
**/
    printf("\n\n  Fila: ");
    ponteiro pos = fila->inicio->prox;
    while(pos!=NULL){
        printf("%c -> ",pos->info);
        pos = pos->prox;
    }
}

void destroi_fila(TADFila* fila)
{
/**
    Faz a fila ficar vazia
**/
    ponteiro pos = fila->inicio->prox;
    while(pos!=NULL){
        fila->inicio = pos->prox;
        free(pos);
        pos = fila->inicio;
    }
    free(fila);
}
