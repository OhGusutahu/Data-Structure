#include<stdio.h>
#include <locale.h>
#include "lista.h"

int main(){
    setlocale(LC_ALL, "Portuguese");
    TLista* vlista = cria_lista();
    printf("\nTamanho da lista: %i",tamanho(vlista));
    printf("\nInserção de B em 1: %i", inserir_posicao(vlista, 'B',1));
    imprimir(vlista);
    printf("\nInserção de F em 1: %i", inserir_posicao(vlista, 'F',1));
    printf("\nTamanho da lista: %i",tamanho(vlista));
    imprimir(vlista);
    printf("\nInserção de D em 3: %i", inserir_posicao(vlista, 'D',3));
    imprimir(vlista);
    printf("\nInserção de A em 2: %i", inserir_posicao(vlista, 'A',2));
    imprimir(vlista);
    printf("\nInserção de C em 5: %i", inserir_posicao(vlista, 'C',5));
    imprimir(vlista);
    printf("\nRemoção de A em 2: %i", remover_posicao(vlista,2));
    imprimir(vlista);
    printf("\nInserção de X em 1: %i", inserir_posicao(vlista, 'X',1));
    imprimir(vlista);
    printf("\nRemoção da posição 6: %i", remover_posicao(vlista,6));
    imprimir(vlista);
    printf("\nRemoção da posição 3: %i", remover_posicao(vlista,3));
    imprimir(vlista);
    int k = -1;
    printf("\nDevolver a posição de F retorna: %i ", devolver_posicao_conteudo(vlista, 'F', &k));
    printf("posição: %i", k);
    printf("\nDevolver a posição de X retorna: %i ", devolver_posicao_conteudo(vlista, 'X', &k));
    printf("posição: %i", k);
    printf("\nDevolver a posição de A retorna: %i ", devolver_posicao_conteudo(vlista, 'A', &k));
    printf("posição: %i", k);
    printf("\nDevolver a posição de C retorna: %i ", devolver_posicao_conteudo(vlista, 'C', &k));
    printf("posição: %i", k);
    char elemento; int i = 1;
    printf("\n\nAcesso da 1ª pos retorno: %i - elemento: ", acessar_conteudo_posicao(vlista, i, &elemento));
    printf(" caracter: %c  i: %i", elemento, i);
    printf("\nAcesso da 3ª pos retorno: %i - elemento: ", acessar_conteudo_posicao(vlista, 3, &elemento));
    printf(" caracter: %c  i: %i", elemento, i);
    printf("\nAcesso da 8ª pos retorno: %i - elemento: ", acessar_conteudo_posicao(vlista, 8, &elemento));
    printf(" %c", elemento);
    printf("\nAcesso da 2ª pos retorno: %i - elemento: ", acessar_conteudo_posicao(vlista, 2, &elemento));
    printf(" %c", elemento);
    printf("\nAcesso da 4ª pos retorno: %i - elemento: ", acessar_conteudo_posicao(vlista, 4, &elemento));
    printf(" %c", elemento);
    destroi(vlista);

return 0;
}
