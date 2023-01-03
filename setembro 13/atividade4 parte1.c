#include <stdio.h>
#include <stdlib.h>

void funcao_troca_inteiros(int *a, int *b) {
    int *aux;

    aux = (int*) malloc(sizeof(int));

    if(aux == NULL) {
        printf("memoria insuficiente\n");
        exit(1);
    } else {
        *aux = *a;
        *a = *b;
        *b = *aux;
        free(aux);
    }
}

/*
Esse c�digo tem a fun��o de trocar os inteiros, para isso, ele alocou temporariamente na mem�ria o
AUX, que vai servir como meio termo para a troca.
A troca foi feita atrav�s do m�todo com o uso dos ponteiros e aloca��o da mem�ria.

Exemplo:
O valor inicialmente de A era 1 e o de B era 2.
Ap�s a troca, o valor de A ser� 2 e o de B ser� 1.

Em caso de erro de aloca��o, o sistema informar� que n�o h� mem�ria suficiente.
*/

