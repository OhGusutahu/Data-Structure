#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

typedef struct sNo *ponteiro;

struct sNo{
    char info;
    ponteiro prox;
};

struct Pilha{
    ponteiro topo; // Topo da pilha
    int qtde; // e tamanho dela
};

TADPilha* cria_pilha(){
/**
    Cria a pilha inicializando os dados necessários para o gerenciamento da mesma
**/
    TADPilha *pilha = (TADPilha *) malloc(sizeof(TADPilha));
    pilha->topo = NULL;
    pilha->qtde = 0;
    return pilha;
}

int vazia(TADPilha* pilha){
/**
    Retorna "true" se a pilha está vazia, caso contrário, retorna "false"
**/
    if(pilha->qtde == 0) return 1;
    return 0;
}

int empilha(TADPilha* pilha, char x){
/**
    Insere o item x no topo da pilha
    Retorna 1 em caso de sucesso e 0 em caso da pilha estar cheia
**/
    return 0;
}

int desempilha(TADPilha* pilha, char *x){
/**
    Retorna o item x no topo da pilha, retirando-o da pilha
**/
    return 0;
}

int tamanho(TADPilha* pilha){
/**
    Retorna o número de itens da pilha
**/
    return pilha->qtde;
}

void imprimir(TADPilha* pilha){
/**
    Imprime a quantidade de elementos, assim como os elementos da pilha
**/
}

void esvaziar_pilha(TADPilha* pilha){
/**
    Faz a pilha ficar vazia
**/
    free(pilha);
}
