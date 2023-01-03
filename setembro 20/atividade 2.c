#include <stdio.h>
#include <stdlib.h>

int iterativa(int n);
int recursiva(int n);


int iterativa(int n) {
    do {
        n = (n * (n + 1))/2;
        return n;
    } while (n < 0);
}

int recursiva(int n) {
    if (n == 0) {
        return 0;
    }
    return(n + recursiva(n-1));
}

int main()
{
    int n, metodo;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("\nDigite o metodo de calculo: ");
    printf("\n\t1. funcao iterativa\n");
    printf("\t2. funcao recursiva\n");
    scanf("%d", &metodo);

    switch (metodo) {
        case 1:
        printf("\nresultado: %d", iterativa(n));
        break;

        case 2:
        printf("\nresultado: %d", recursiva(n));
        break;

        default:
        printf("\nessa nao e uma opcao");
        break;
    }
        printf("\n\n");
}
