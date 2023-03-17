#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

/** Lista Duplamente Ligada Circular com Cabeça **/

typedef struct sNo *ponteiro;

struct sNo{
    char info;
    ponteiro ant, prox;
};

struct Lista{
    ponteiro prim; // Topo da lista
    int qtde; // Tamanho da lista
};

TLista* cria_lista() {
/**Cria a lista inicializando os dados necessário para o gerencimento da mesma
   o parâmetro tam é usado para implementação de listas estáticas, no qual a alocação
   de memória precisa ser feita no momento da criação da lista
**/
    TLista *lista = (TLista*) malloc(sizeof(TLista));
    ponteiro cabeca = (ponteiro) malloc(sizeof(struct sNo)); // cabeça
    lista->prim = cabeca;
    cabeca->ant = cabeca;
    cabeca->prox = cabeca;
    lista->qtde = 0;
    return lista;
}

ponteiro busca(TLista* lista, char x){ // encontrar x na lista
    ponteiro pos = lista->prim->prox;
    while(pos!=lista->prim&&pos->info<x){
        pos = pos->prox;
    }
    return pos;
}

int inserir_ordenado(TLista* lista, char x){
/**Insere o elemento x na lista de forma ordenada crescente
  Retorna 1 em caso de sucesso e 0 caso a lista esteja cheia**/
    ponteiro novo = (ponteiro) malloc(sizeof(struct sNo));
    novo->info = x;
    ponteiro aux = busca(lista, x);
    novo->prox = aux;
    novo->ant = aux->ant;
    aux->ant = novo;
    novo->ant->prox = novo;
    lista->qtde++;
    return 1;
}

int remover(TLista* lista, char x){
/**Remove o elemento x da lista
  Retorna 1 em caso de sucesso e 0 caso o elemento não exista
  na lista ou a lista esteja vazia**/
    ponteiro aux = busca(lista, x); // encontrar x
    if(aux->info != x) return 0; // lista 'vazia' ou x não está na lista
    else {
      aux->ant->prox = aux->prox;
      aux->prox->ant = aux->ant;
      free(aux);
      lista->qtde--;
    }
    return 1;
}

int acessar_conteudo(TLista* lista, int pos, char* elem){
/**Acessa o i-ésimo elemento da lista, colocando o caracter em elem
  Retorna 1 em caso de sucesso e 0 caso a posição não seja válida*/
    if(pos < 1 || pos > lista->qtde){ // se a posição não 
      *elem = '*';
      return 0;
    }
    else {
      ponteiro aux = lista->prim->prox;
      int count = 1;
      while(count < pos) {
        aux = aux->prox;
        count++;
      }
      *elem = aux->info;
    }
    return 1;
}

int devolver_posicao(TLista* lista, char x, int *pos){
/**Devolve a posição pos (i-ésima) na qual se encontra a
  primeira ocorrência do elemento x na lista.
  Retorna 1 em caso de sucesso e 0 caso o elemento x não faca parte da lista*/
    *pos = -1;
    ponteiro aux = lista->prim->prox;
    int count = 1;
    while(aux!=lista->prim) {
      if(aux->info==x) {
        *pos = count;
        return 1;
      }
      aux = aux->prox;
      count++;
    }
    return 0;
}

int tamanho (TLista* lista){
/**retorna o tamanho (quantide de elementos) da lista*/
    return lista->qtde;
}

void imprimir(TLista* lista){
/**Imprime a quantidade de elementos, assim como os elementos da lista*/
    printf("\n\n  Lista: ");
    ponteiro aux = lista->prim->prox;
    while(aux!=lista->prim){
        printf("%c -> ",aux->info);
        aux = aux->prox;
    }
    printf("\nPosicao: 1    2    3    4    5    6    7    8    9    10");
}

void destroi(TLista* lista){
/**Libera a memória alocada pela lista*/
}
