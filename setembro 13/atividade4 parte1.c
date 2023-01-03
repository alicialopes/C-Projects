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
Esse código tem a função de trocar os inteiros, para isso, ele alocou temporariamente na memória o
AUX, que vai servir como meio termo para a troca.
A troca foi feita através do método com o uso dos ponteiros e alocação da memória.

Exemplo:
O valor inicialmente de A era 1 e o de B era 2.
Após a troca, o valor de A será 2 e o de B será 1.

Em caso de erro de alocação, o sistema informará que não há memória suficiente.
*/

