#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

/**
Esta � a interface que descreve um TAD lista que insere
os elementos de forma ordenada
**/

typedef struct Lista TLista; /**Tipo exportado**/

TLista* cria_lista ();
/**Cria a lista inicializando os dados necess�rio para o gerencimento da mesma
   o par�metro tam � usado para implementa��o de listas est�ticas, no qual a aloca��o
   de mem�ria precisa ser feita no momento da cria��o da lista
   Para lista din�micas (aloca��o de mem�ria por demanda), este par�metro � ignorado
**/

int inserir_ordenado(TLista* lista, char x);
/**Insere o elemento x na lista de forma ordenada crescente
  Retorna 1 em caso de sucesso e 0 caso a lista esteja cheia**/


int remover(TLista* lista, char x);
/**Remove o elemento x da lista
  Retorna 1 em caso de sucesso e 0 caso o elemento n�o exista
  na lista ou a lista esteja vazia**/

int acessar_conteudo_posicao(TLista* lista, int i, char* elem);
/**Acessa o i-�simo elemento da lista, colocando o caracter em elem
  Retorna 1 em caso de sucesso e 0 caso a posi��o n�o seja v�lida*/

int devolver_posicao_conteudo(TLista* lista, char x, int *pos);
/**Devolve a posi��o pos (i-�sima) na qual se encontra a
  primeira ocorr�ncia do elemento x na lista.
  Retorna 1 em caso de sucesso e 0 caso o elemento x n�o fa�a parte da lista*/

int tamanho (TLista* lista);
/**retorna o tamanho (quantide de elementos) da lista*/

void imprimir(TLista* lista);
/**Imprime a quantidade de elementos, assim como os elementos da lista*/

void destroi(TLista* lista);
/**Libera a mem�ria alocada pela lista*/


#endif // LISTA_H_INCLUDED
