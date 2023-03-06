#include<stdio.h>
#include <locale.h>
#include "lista.h"

int main(){
    setlocale(LC_ALL, "Portuguese");
    TLista* vlista;
    vlista = cria_lista();
    printf("\nTamanho da lista: %i",tamanho(vlista));

    printf("\n\nInser��o de H: %i", inserir_ordenado(vlista, 'H'));
    imprimir(vlista);
    printf("\n\nInser��o de M: %i", inserir_ordenado(vlista, 'M'));
    printf("\n\nTamanho da lista: %i",tamanho(vlista));
    imprimir(vlista);
    printf("\n\nInser��o de J: %i", inserir_ordenado(vlista, 'J'));
    imprimir(vlista);
    printf("\n\nInser��o de D: %i", inserir_ordenado(vlista, 'D'));
    imprimir(vlista);

    printf("\n\nRemo��o de M: %i", remover(vlista, 'M'));
    imprimir(vlista);
    printf("\n\nTamanho da lista: %i",tamanho(vlista));

    printf("\n\nInser��o de F: %i", inserir_ordenado(vlista, 'F'));
    imprimir(vlista);
    printf("\n\nInser��o de Q: %i", inserir_ordenado(vlista, 'Q'));
    imprimir(vlista);

    printf("\n\nRemo��o de D: %i", remover(vlista, 'D'));
    imprimir(vlista);
    printf("\n\nTamanho da lista: %i",tamanho(vlista));

    printf("\n\nInser��o de O: %i", inserir_ordenado(vlista, 'O'));
    imprimir(vlista);
    printf("\n\nInser��o de B: %i", inserir_ordenado(vlista, 'B'));
    imprimir(vlista);

    char elemento;
    printf("\n\nAcesso da 1� pos retorno: %i - elemento: ", acessar_conteudo(vlista, 1, &elemento));
    printf(" %c", elemento);
    printf("\n\nAcesso da 3� pos retorno: %i - elemento: ", acessar_conteudo(vlista, 3, &elemento));
    printf(" %c", elemento);
    printf("\n\nAcesso da 8� pos retorno: %i - elemento: ", acessar_conteudo(vlista, 8, &elemento));
    printf(" %c", elemento);
    printf("\n\nAcesso da 2� pos retorno: %i - elemento: ", acessar_conteudo(vlista, 2, &elemento));
    printf(" %c", elemento);
    printf("\n\nAcesso da 5� pos retorno: %i - elemento: ", acessar_conteudo(vlista, 5, &elemento));
    printf(" %c", elemento);
    imprimir(vlista);

    int pos;
    printf("\n\nDevolve a posicao de 'B': %i - pos: ", devolver_posicao(vlista, 'B', &pos));
    printf(" %i", pos);
    printf("\n\nDevolve a posicao de 'J': %i - pos: ", devolver_posicao(vlista, 'J', &pos));
    printf(" %i", pos);
    printf("\n\nDevolve a posicao de 'Q': %i - pos: ", devolver_posicao(vlista, 'Q', &pos));
    printf(" %i", pos);
    printf("\n\nDevolve a posicao de 'D': %i - pos: ", devolver_posicao(vlista, 'D', &pos));
    printf(" %i", pos);

return 0;
}
