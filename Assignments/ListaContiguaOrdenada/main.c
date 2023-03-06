#include<stdio.h>
#include <locale.h>
#include "listaordenada.h"

int main(){
    setlocale(LC_ALL, "Portuguese");
    TLista* vlista;
    vlista = cria_lista(10);
    printf("\nTamanho da lista: %i",tamanho(vlista));
    printf("\n\nInser��o de B: %i", inserir_ordenado(vlista, 'B'));
    imprimir(vlista);
    printf("\n\nInser��o de F: %i", inserir_ordenado(vlista, 'F'));
    printf("\n\nTamanho da lista: %i",tamanho(vlista));
    imprimir(vlista);
    printf("\n\nInser��o de D: %i", inserir_ordenado(vlista, 'D'));
    imprimir(vlista);
    printf("\n\nInser��o de A: %i", inserir_ordenado(vlista, 'A'));
    imprimir(vlista);
    printf("\n\nRemo��o de F: %i", remover(vlista, 'F'));
    imprimir(vlista);
    printf("\n\nInser��o de C: %i", inserir_ordenado(vlista, 'C'));
    imprimir(vlista);
    printf("\n\nInser��o de R: %i", inserir_ordenado(vlista, 'R'));
    imprimir(vlista);
    printf("\n\nRemo��o de A: %i", remover(vlista, 'A'));
    imprimir(vlista);
    printf("\n\nInser��o de E: %i", inserir_ordenado(vlista, 'E'));
    imprimir(vlista);
    char elemento;
    printf("\n\nAcesso da 1� pos retorno: %i - elemento: ", acessar_conteudo_posicao(vlista, 1, &elemento));
    printf(" %c", elemento);
    printf("\n\nAcesso da 3� pos retorno: %i - elemento: ", acessar_conteudo_posicao(vlista, 3, &elemento));
    printf(" %c", elemento);
    printf("\n\nAcesso da 8� pos retorno: %i - elemento: ", acessar_conteudo_posicao(vlista, 8, &elemento));
    printf(" %c", elemento);
    printf("\n\nAcesso da 2� pos retorno: %i - elemento: ", acessar_conteudo_posicao(vlista, 2, &elemento));
    printf(" %c", elemento);
    printf("\n\nAcesso da 5� pos retorno: %i - elemento: ", acessar_conteudo_posicao(vlista, 5, &elemento));
    printf(" %c", elemento);
    int pos;
    printf("\n\nDevolve a posicao de 'B': %i - pos: ", devolver_posicao_conteudo(vlista, 'B', &pos));
    printf(" %i", pos);
    printf("\n\nDevolve a posicao de 'R': %i - pos: ", devolver_posicao_conteudo(vlista, 'R', &pos));
    printf(" %i", pos);
    printf("\n\nDevolve a posicao de 'K': %i - pos: ", devolver_posicao_conteudo(vlista, 'K', &pos));
    printf(" %i", pos);
    printf("\n\nDevolve a posicao de 'D': %i - pos: ", devolver_posicao_conteudo(vlista, 'D', &pos));
    printf(" %i", pos);



return 0;
}
