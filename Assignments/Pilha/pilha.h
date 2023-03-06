#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

/** TAD pilha - Header (interface que descreve uma pilha) **/

typedef struct Pilha TADPilha; // Tipo exportado

TADPilha* cria_pilha();
/**
    Cria a pilha inicializando os dados necessários para o gerenciamento da mesma
**/

int vazia(TADPilha* pilha);
/**
    Retorna "true" se a pilha está vazia, caso contrário, retorna "false"
**/

int empilha(TADPilha* pilha, char x);
/**
    Insere o item x no topo da pilha
    Retorna 1 em caso de sucesso e 0 em caso da pilha estar cheia
**/

int desempilha(TADPilha* pilha, char *x);
/**
    Retorna o item x no topo da pilha, retirando-o da pilha
**/

int tamanho(TADPilha* pilha);
/**
    Retorna o número de itens da pilha
**/

void imprimir(TADPilha* pilha);
/**
    Imprime a quantidade de elementos, assim como os elementos da pilha
**/

void esvaziar_pilha(TADPilha* pilha);
/**
    Faz a pilha ficar vazia
**/

#endif // PILHA_H_INCLUDED
