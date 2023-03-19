#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

/** TAD fila - Header (interface que descreve uma fila) **/

typedef struct Fila TADFila; // Tipo exportado

TADFila* cria_fila();
/**
    Cria a fila inicializando os dados necessários para o gerenciamento da mesma
**/

int vazia(TADFila* fila);
/**
    Retorna "true" se a fila está vazia, caso contrário, retorna "false"
**/

int enfileira(TADFila* fila, char x);
/**
    Insere o item x no fim da fila
    Retorna 1 em caso de sucesso e 0 em caso da fila estar cheia
**/

int desenfileira(TADFila* fila, char *x);
/**
    Retorna o item x no começo da fila, retirando-o da fila
**/

int tamanho(TADFila* fila);
/**
    Retorna o número de itens da fila
**/

void imprimir(TADFila* fila);
/**
    Imprime a quantidade de elementos, assim como os elementos da fila
**/

void destroi_fila(TADFila* fila);
/**
    Faz a fila ficar vazia
**/

#endif // FILA_H_INCLUDED

