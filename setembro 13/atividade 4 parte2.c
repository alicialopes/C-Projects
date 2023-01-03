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
Esse código primeiramente aloca um bloco de memória, recebendo como um parâmetro o valor 4
e logo em seguida coloca "ifsp" no vetor.

Após isso, ele realoca a memória, alterando o parâmetro para o valor 15, acrescentando ao vetor
o texto "-Guarulhos" e exibindo o vetor atualizado.
*/
