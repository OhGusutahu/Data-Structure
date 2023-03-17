#include "listaordenada.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM_MAX 10

struct Lista{
    char* vet; //vetor que contém os elementos da lista
    int qtde; //quantidade de elementos efetivos na lista
    int tam; //quantidade máxima de elementos
};


typedef struct Lista TLista; /**Tipo exportado**/

TLista* cria_lista(){
    TLista * lista = (TLista *) malloc(sizeof(TLista));
    lista->vet = (char *) malloc(sizeof(char)*TAM_MAX);
    lista->tam = TAM_MAX; // tamanho máximo da lista
    lista->qtde = 0; //lista com 0 elementos
    return lista;
}

int inserir_ordenado(TLista *lista, char x)
{
    int i = 0, j;

    if(lista->qtde == lista->tam)
        return 0; //lista cheia

    while( i < lista->qtde && lista->vet[i] < x) //percorre a lista enquanto os valores do vetor forem menores que o do elemento x
    {
        i++;
    }
    for(j = lista->qtde-1; j >= i; j--)
    {
        lista->vet[j+1] = lista->vet[j]; //arrasta os elementos maiores que x uma posição a frente
    }

    lista->vet[i] = x; // insere x
    lista->qtde++;
    return 1;
}

int remover(TLista *lista, char x)
{ /** Implementado :) **/
    int idx, comeco = 0, fim = lista->qtde;

    if(lista->qtde < 1) {
        return 0; // não teria o que remover da lista caso fosse menor que 1
    }
    else {
        while(comeco <= fim) {          // faz busca binária para encontrar o índice
            idx = (comeco+fim)/2;       // já que está ordenado
            if(lista->vet[idx] == x) {
                break;
            }
            else if(lista->vet[idx] < x) {
                comeco = idx+1;
            }
            else {
                fim = idx-1;
            }
        }
        if(idx > fim || idx < comeco) { // caso não encontre x, retorna 0
            return 0;
        }
        int j;
        for(j=idx; j < lista->qtde; j++){ // organiza o vetor para ocupar o índice de x
            lista->vet[j] = lista->vet[j+1];
        }
        lista->qtde--;
        return 1;
    }
}

int devolver_posicao_conteudo(TLista *lista, char x, int *pos)
{
    int posinicial, posfinal, meiolista;

    posfinal = lista->qtde-1;
    posinicial = 0;

    while( posinicial <= posfinal)
    {
        meiolista = posfinal-posinicial/2;
        if(lista->vet[meiolista] > x)
        {
            posfinal = meiolista-1;
        }
        if(lista->vet[meiolista] < x)
        {
            posinicial = meiolista+1;
        }
        if(lista->vet[meiolista] == x)
        {
            (*pos) = meiolista+1;
            return 1;
        }
    }
    (*pos) = -1;
    return 0;
}

int acessar_conteudo_posicao(TLista *lista, int i, char *elem)
{/** Implementado :) **/
    if(i < 1 || i > lista->qtde) { // caso i não seja válido, retorna 0
        return 0;
    }
    else {
        *elem = lista->vet[i-1]; // coloca o caractere em *elem (i-1 considerando como posição e não índice)
    }
    return 1;

    /*
    No main, na situação que retorna 0, apresenta o elemento D
    Creio que seja por ser o valor anterior da variável elemento
    Mas não tenho certeza...
    */
}

int tamanho(TLista *lista)
{
    return(lista->qtde);
}

void imprimir(TLista *lista)
{
    printf("\n**Quantidade: %i",lista->qtde);
    printf("\n**Elementos da Lista: ");
    int i;
    for (i = 0; i < lista->qtde; i++)
        printf("%c -> ",lista->vet[i]);
    printf("\n");

}

void destroi(TLista* list)
{
    free(list->vet);
    free(list);
}
