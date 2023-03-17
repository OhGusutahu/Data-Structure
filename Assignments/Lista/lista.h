#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

/**
Esta é a interface que descreve um TAD lista ordenada
**/

typedef struct Lista TLista; /**Tipo exportado**/

TLista* cria_lista();
/**Cria a lista inicializando os dados necessário para o gerencimento da mesma
   o parâmetro tam é usado para implementação de listas estáticas, no qual a alocação
   de memória precisa ser feita no momento da criação da lista
**/

int inserir_ordenado(TLista* lista, char x);
/**Insere o elemento x na lista de forma ordenada crescente
  Retorna 1 em caso de sucesso e 0 caso a lista esteja cheia**/

int remover(TLista* lista, char x);
/**Remove o elemento x da lista
  Retorna 1 em caso de sucesso e 0 caso o elemento não exista
  na lista ou a lista esteja vazia**/

int acessar_conteudo(TLista* lista, int i, char* elem);
/**Acessa o i-ésimo elemento da lista, colocando o caracter em elem
  Retorna 1 em caso de sucesso e 0 caso a posição não seja válida*/

int devolver_posicao(TLista* lista, char x, int *pos);
/**Devolve a posição pos (i-ésima) na qual se encontra a
  primeira ocorrência do elemento x na lista.
  Retorna 1 em caso de sucesso e 0 caso o elemento x não faça parte da lista*/

int tamanho (TLista* lista);
/**retorna o tamanho (quantide de elementos) da lista*/

void imprimir(TLista* lista);
/**Imprime a quantidade de elementos, assim como os elementos da lista*/

void destroi(TLista* lista);
/**Libera a memória alocada pela lista*/


#endif // LISTA_H_INCLUDED
