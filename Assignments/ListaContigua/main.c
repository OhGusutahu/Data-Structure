#include<stdio.h>
#include <locale.h>
#include "lista.h"

int main(){
    setlocale(LC_ALL, "Portuguese");
    TLista* vlista = cria_lista();
    printf("\nTamanho da lista: %i",tamanho(vlista));
    printf("\nInser��o de B em 1: %i", inserir_posicao(vlista, 'B',1));
    imprimir(vlista);
    printf("\nInser��o de F em 1: %i", inserir_posicao(vlista, 'F',1));
    printf("\nTamanho da lista: %i",tamanho(vlista));
    imprimir(vlista);
    printf("\nInser��o de D em 3: %i", inserir_posicao(vlista, 'D',3));
    imprimir(vlista);
    printf("\nInser��o de A em 2: %i", inserir_posicao(vlista, 'A',2));
    imprimir(vlista);
    printf("\nInser��o de C em 5: %i", inserir_posicao(vlista, 'C',5));
    imprimir(vlista);
    printf("\nRemo��o de A em 2: %i", remover_posicao(vlista,2));
    imprimir(vlista);
    printf("\nInser��o de X em 1: %i", inserir_posicao(vlista, 'X',1));
    imprimir(vlista);
    printf("\nRemo��o da posi��o 6: %i", remover_posicao(vlista,6));
    imprimir(vlista);
    printf("\nRemo��o da posi��o 3: %i", remover_posicao(vlista,3));
    imprimir(vlista);
    int k = -1;
    printf("\nDevolver a posi��o de F retorna: %i ", devolver_posicao_conteudo(vlista, 'F', &k));
    printf("posi��o: %i", k);
    printf("\nDevolver a posi��o de X retorna: %i ", devolver_posicao_conteudo(vlista, 'X', &k));
    printf("posi��o: %i", k);
    printf("\nDevolver a posi��o de A retorna: %i ", devolver_posicao_conteudo(vlista, 'A', &k));
    printf("posi��o: %i", k);
    printf("\nDevolver a posi��o de C retorna: %i ", devolver_posicao_conteudo(vlista, 'C', &k));
    printf("posi��o: %i", k);
    char elemento; int i = 1;
    printf("\n\nAcesso da 1� pos retorno: %i - elemento: ", acessar_conteudo_posicao(vlista, i, &elemento));
    printf(" caracter: %c  i: %i", elemento, i);
    printf("\nAcesso da 3� pos retorno: %i - elemento: ", acessar_conteudo_posicao(vlista, 3, &elemento));
    printf(" caracter: %c  i: %i", elemento, i);
    printf("\nAcesso da 8� pos retorno: %i - elemento: ", acessar_conteudo_posicao(vlista, 8, &elemento));
    printf(" %c", elemento);
    printf("\nAcesso da 2� pos retorno: %i - elemento: ", acessar_conteudo_posicao(vlista, 2, &elemento));
    printf(" %c", elemento);
    printf("\nAcesso da 4� pos retorno: %i - elemento: ", acessar_conteudo_posicao(vlista, 4, &elemento));
    printf(" %c", elemento);
    destroi(vlista);

return 0;
}
