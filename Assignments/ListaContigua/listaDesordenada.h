#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

/**
Esta � a interface que descreve um TAD lista
que insere os elementos nas posi��es determinadas
pelo usu�rio
**/

typedef struct Lista TLista;

TLista* cria_lista ();
/*Aloca espa�o de mem�ria para os elementos da estrutura lista
  e inicializa as vari�veis de gerenciamento da mesma*/

int inserir_posicao(TLista* lista, char x, int i);
/*Insere o elemento x na i-esima posi��o da lista
  Retorna 1 em caso de sucesso e 0 caso a posi��o
  n�o seja v�lida ou a lista esteja cheia*/

int remover_posicao(TLista* lista, int i);
/*Remove o i-�simo elemento da lista
  Retorna 1 em caso de sucesso e 0 caso a posi��o
  n�o seja v�lida ou a lista esteja vazia*/

int acessar_conteudo_posicao(TLista* lista, int i, char *elem);
/*Acessa o elemento elem da i-�sima posi��o da lista
  Retorna 1 em caso de sucesso e 0 caso a posi��o
  n�o seja v�lida*/

int devolver_posicao_conteudo(TLista* lista, char x, int *pos);
/*Devolve a posi��o pos na qual se encontra a
  primeira ocorr�ncia do elemento x na lista.
  Retorna 1 em caso de sucesso e 0 caso o elemento
  x n�o fa�a parte da lista*/

int tamanho(TLista* lista);
/*retorna o tamanho (quantide de elementos) da lista*/

void imprimir(TLista* lista);
/*Imprime a quantidade de elementos, assim como os
  elementos da lista*/

void destroi(TLista* lista);
/*Libera a mem�ria alocada pela lista*/


#endif // LISTA_H_INCLUDED
