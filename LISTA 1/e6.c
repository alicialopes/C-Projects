#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Leia quatro notas, calcule a média aritmética e imprima o resultado.

    float nota1 = 10, nota2 = 7.8, nota3 = 5.4, nota4 = 8.3;
    float media = (nota1 + nota2 + nota3 + nota4)/4;

    printf("nota 1: %.1f\n", nota1);
    printf("nota 2: %.1f\n", nota2);
    printf("nota 3: %.1f\n", nota3);
    printf("nota 4: %.1f\n", nota4);
    printf("media: %.1f\n\n", media);

    system("pause");
    return 0;
}

