#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef struct sNo *ponteiro;

struct sNo{
    char info;
    ponteiro prox;
};

struct Lista{
    ponteiro prim;
    int qtde; //n=quantidade de elementos na lista
};

TLista* cria_lista(){
/**Cria a lista inicializando os dados necessário para o gerencimento da mesma
   o parâmetro tam é usado para implementação de listas estáticas, no qual a alocação
   de memória precisa ser feita no momento da criação da lista
**/
    TLista *lista = (TLista *) malloc(sizeof(TLista));
    lista->prim = NULL;
    lista->qtde = 0;
    return lista;
}

int inserir_ordenado(TLista* lista, char x){
/**Insere o elemento x na lista de forma ordenada crescente
  Retorna 1 em caso de sucesso e 0 caso a lista esteja cheia
**/
    //determina espaço do novo caracter e coloca conteúdo nele
    ponteiro novo = (ponteiro) malloc(sizeof(struct sNo));
    novo->info = x;
    //verifica a posição da lista que será inserido
    if (lista->qtde == 0 || lista->prim->info > x){
        //inserção em lista vazia ou início da lista
        novo->prox = lista->prim;
        lista->prim = novo;
    }
    else {
        //inserção em lista não vazia no meio/fim da lista
        ponteiro pos, antes;
        pos = lista->prim;
        while(pos!=NULL && pos->info < x){
            antes = pos;
            pos = pos->prox;
        }
        novo->prox = pos;
        antes->prox = novo;
    }
    lista->qtde++;
    return 1;
}

int devolver_posicao(TLista* lista, char x, int *pos){
/**Devolve a posição pos (i-ésima) na qual se encontra a
   primeira ocorrência do elemento x na lista.
   Retorna 1 em caso de sucesso e 0 caso o elemento x não faça parte da lista
**/
    *pos = -1;
    ponteiro aux = lista->prim;
    int count=1;
    while(aux!=NULL) {
        if(x==aux->info) {
            *pos = count;
            return 1;
        }
        aux = aux->prox;
        count++;
    }
    return 0;
/** Feito **/
}

int remover (TLista* lista, char x){
/**Remove o elemento x da lista
   Retorna 1 em caso de sucesso e 0 caso o elemento não exista
   na lista ou a lista esteja vazia
**/
    ponteiro aux = lista->prim, antes;
    while(aux!=NULL && aux->info!=x) { // econtrar x
        antes = aux;
        aux = aux->prox;
    }
    if(aux==NULL) { // se x não estiver na lista ou lista vazia
        return 0;
    }
    else {
        /* remove x */
        if(aux == lista->prim) { // x é o primeiro elemento
            lista->prim = aux->prox;
            free(aux);
            lista->qtde--;
            return 1;
        }
        else {
            antes->prox = aux->prox;
            free(aux);
            lista->qtde--;
            return 1;
        }
    }
}

void imprimir(TLista* lista){
/**Imprime a quantidade de elementos, assim como os elementos da lista*/
    printf("\n\n  Lista: ");
    ponteiro pos = lista->prim;
    while(pos!=NULL){
        printf("%c -> ",pos->info);
        pos = pos->prox;
    }
    printf("\nPosição: 1    2    3    4    5    6    7    8    9    10");
}

int tamanho (TLista* lista){
/**retorna o tamanho (quantidade de elementos) da lista*/
    return lista->qtde;
}

int acessar_conteudo(TLista* lista, int pos, char *x){
/**Acessa o i-ésimo elemento da lista, colocando o caracter em elem
   Retorna 1 em caso de sucesso e 0 caso a posição não seja válida*/
   if(pos < 1 || pos > lista->qtde) {
        return 0;
    }
    else {
        ponteiro aux=lista->prim;
        int count = 1;
        while(aux!=NULL && count!=pos) {
            aux = aux->prox;
            count++;
        }
        if(aux==NULL) {
            return 0;
        }
        else {
            *x=aux->info;
            return 1;
        }
    }
    return 0;
/** Feito **/
}

void destroi(TLista* lista){
/**Libera a memória alocada pela lista*/
    ponteiro pos = lista->prim, next;
    while(pos!=NULL){
        next = pos->prox;
        free(pos);
        pos = next;
        lista->prim = pos;
    }
    free(lista);
}
