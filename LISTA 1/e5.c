#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Efetue a leitura de três valores e apresente
    // como resultado a soma dos quadrados dos três valores lidos.

    int a = 2, b = 3, c = 4;

    printf("valor 1: %d\n", a);
    printf("valor 2: %d\n", b);
    printf("valor 3: %d\n", c);

    printf("soma dos quadrados dos valores: %d\n\n", a*a + b*b + c*c);

    system("pause");
    return 0;
}

