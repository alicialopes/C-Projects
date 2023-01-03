#include <stdio.h>
#include <stdlib.h>


void main() {
    char *p;
    p = (char*)malloc(4*sizeof(char));
    strcpy(p, "IFSP");

    p = (char*)realloc(p,15*sizeof(char));
    strcat(p, "-Guarulhos");
    printf("%s", p);
    free(p);
}

/*
Esse c�digo primeiramente aloca um bloco de mem�ria, recebendo como um par�metro o valor 4
e logo em seguida coloca "ifsp" no vetor.

Ap�s isso, ele realoca a mem�ria, alterando o par�metro para o valor 15, acrescentando ao vetor
o texto "-Guarulhos" e exibindo o vetor atualizado.
*/
