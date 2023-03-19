#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

#define MAX_TAM 10

/** Fila estática circular **/

struct Fila{
    char* vet; // Vetor que contém os elementos da fila
    int start; // Indice do começo da fila
    int end; // Indice do fim da fila
    int qtde; // Quantidade de elementos efetivos
    int maxtam; // Quantidade máxima
};

typedef struct Fila TADFila; // Tipo exportado

TADFila* cria_fila()
{
/**
    Cria a fila inicializando os dados necessários para o gerenciamento da mesma
**/
    TADFila *fila = (TADFila *) malloc(sizeof(TADFila));
    fila->vet = (char *) malloc(sizeof(char)*MAX_TAM);
    fila->maxtam = MAX_TAM;
    fila->start = 0;   // Fila
    fila->end = 0; // vazia
    fila->qtde = 0;
    return fila;
}

int vazia(TADFila* fila)
{
/**
    Retorna "true" se a fila está vazia, caso contrário, retorna "false"
**/
    if(fila->start==fila->end) return 1;
    return 0;
}

int enfileira(TADFila* fila, char x)
{
/**
    Insere o item x no fim da fila
    Retorna 1 em caso de sucesso e 0 em caso da fila estar cheia
**/
    if(fila->qtde==fila->maxtam) return 0; // fila cheia
    else {
        fila->vet[fila->end] = x;
        fila->end = (fila->end+1)%fila->maxtam;
        fila->qtde++;
        return 1;
    }
}

int desenfileira(TADFila* fila, char *x)
{
/**
    Retorna o item x no começo da fila, retirando-o da fila
**/
    if(fila->start==fila->end) return 0; // fila vazia
    else {
        *x = fila->vet[fila->start];
        fila->start = (fila->start+1)%fila->maxtam;
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
    printf("\n**Quantidade: %i",fila->qtde);
    printf("\n**Elementos da Fila: ");
    int i = 0, aux = fila->start;
    while(i!=fila->qtde) {
        printf("%c -> ", fila->vet[aux]);
        aux = (aux+1)%fila->maxtam;
        i++;
    }
    printf("\n");
}

void destroi_fila(TADFila* fila)
{
/**
    Faz a fila ficar vazia
**/
    free(fila->vet);
    free(fila);
}
