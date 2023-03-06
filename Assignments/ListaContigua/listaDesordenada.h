#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

/**
Esta é a interface que descreve um TAD lista
que insere os elementos nas posições determinadas
pelo usuário
**/

typedef struct Lista TLista;

TLista* cria_lista ();
/*Aloca espaço de memória para os elementos da estrutura lista
  e inicializa as variáveis de gerenciamento da mesma*/

int inserir_posicao(TLista* lista, char x, int i);
/*Insere o elemento x na i-esima posição da lista
  Retorna 1 em caso de sucesso e 0 caso a posição
  não seja válida ou a lista esteja cheia*/

int remover_posicao(TLista* lista, int i);
/*Remove o i-ésimo elemento da lista
  Retorna 1 em caso de sucesso e 0 caso a posição
  não seja válida ou a lista esteja vazia*/

int acessar_conteudo_posicao(TLista* lista, int i, char *elem);
/*Acessa o elemento elem da i-ésima posição da lista
  Retorna 1 em caso de sucesso e 0 caso a posição
  não seja válida*/

int devolver_posicao_conteudo(TLista* lista, char x, int *pos);
/*Devolve a posição pos na qual se encontra a
  primeira ocorrência do elemento x na lista.
  Retorna 1 em caso de sucesso e 0 caso o elemento
  x não faça parte da lista*/

int tamanho(TLista* lista);
/*retorna o tamanho (quantide de elementos) da lista*/

void imprimir(TLista* lista);
/*Imprime a quantidade de elementos, assim como os
  elementos da lista*/

void destroi(TLista* lista);
/*Libera a memória alocada pela lista*/


#endif // LISTA_H_INCLUDED
