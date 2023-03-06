#include "lista.h"
#include<stdio.h>
#include<stdlib.h>

#define TAM_MAX 10

struct Lista{
    char* vet; //vetor que cont�m os elementos da lista
    int qtde; //quantidade de elementos efetivos na lista
    int max_tam; //quantidade m�xima de elementos
};

typedef struct Lista TLista;

TLista* cria_lista(){
    TLista* list = (TLista *) malloc(sizeof(TLista));
    list->vet = (char *) malloc(sizeof(char)*TAM_MAX);
    //(*list).vet = (char *) malloc(sizeof(char)*TAM_MAX);
    list->max_tam = TAM_MAX; // tamanho m�ximo da lista
    list->qtde = 0; //lista com 0 elementos
    return list;
}

void destroi(TLista* lista)
{
    free(lista->vet);
    free(lista);
}

int tamanho(TLista* lista)
{
    return lista->qtde;
}

void imprimir(TLista* lista)
{
    printf("\n\n**Quantidade: %i",lista->qtde);
    printf("\n**Elementos da Lista: ");
    int i;
    for (i=0;i < lista->qtde;i++)
        printf("%c -> ",lista->vet[i]);
    printf("\n");
}

int inserir_posicao(TLista* lista, char x, int i)
{

    if(i < 1 || i > lista->qtde+1 || lista->qtde == lista->max_tam)
        return 0;
    else {
        int j;
        for (j=lista->qtde; j>=i; j--)
            lista->vet[j] = lista->vet[j-1];
        lista->vet[j] = x;
        lista->qtde++;
        return 1;
    }
}

int remover_posicao(TLista* lista, int i)
{

    if(lista->qtde < 1 || i < 1 || i > lista->qtde)
        return 0;
    else{
        int j;
        for(j=i-1; j < lista->qtde; j++){
            lista->vet[j] = lista->vet[j+1];
        }
        lista->qtde--;
        return 1;
    }
}

int devolver_posicao_conteudo(TLista* lista, char x, int *pos)
{/** implementado :) **/
    int i;
    for(i=0; i<lista->qtde; i++) { // busca sequencial para encontrar o caractere
        if(lista->vet[i] == x) {
            *pos = i+1;
            return 1;
        }
    }
    return 0; // caso n�o encontre, retorna 0

    // na situa��o que retorna 0, creio que repete-se a posi��o
    // do devolver anterior

}

int acessar_conteudo_posicao(TLista* lista, int i, char *elem)
{/** Implementado :) **/
    if(i < 1 || i > lista->qtde) { // caso i n�o seja v�lido, retorna 0
        return 0;
    }
    else {
        *elem = lista->vet[i-1]; // coloca o caractere em *elem (i-1 considerando como posi��o e n�o �ndice)
    }
    return 1;
}

