#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int check_brackets(char exp[], int t)
{
    TADPilha* p;
    p = cria_pilha();
    int i, res;
    char x;

    for(i=0; i<t; i++) {
        switch(exp[i]) {
            case '{':
                empilha(p,exp[i]);
            break;
            case '[':
                empilha(p,exp[i]);
            break;
            case '(':
                empilha(p,exp[i]);
            break;
            case '}':
                res = desempilha(p,&x);
                if(res == 0 || x!='{') return 0;
            break;
            case ']':
                res = desempilha(p,&x);
                if(res == 0 || x!='[') return 0;
            break;
            case ')':
                res = desempilha(p,&x);
                if(res == 0 || x!='(') return 0;
            break;
        }
    }
    return 1;
}

int main()
{
    int tam = 50;
    char expression[tam];
    printf("Insert the expression: ");
    scanf("%s", expression);
    printf("%s\n", expression);
    printf("Check brackets: %d", check_brackets(expression, tam));
    return 0;
}
