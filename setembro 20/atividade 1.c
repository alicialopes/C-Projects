#include <stdio.h>
#include <stdlib.h>

int iterativa(int n);
int recursiva(int n);


int iterativa(int n) {
    printf("\n\nversao iterativa: ");

    printf("\n%d", n);

    do {
        n = n - 1;
        printf("\n%d", n);
    } while (n > 1);

}

int recursiva(int n) {
    if (n == 1) {
        printf("\n1");
    } else {
        int f = n;
        printf("\n%d", f);
        f = n - recursiva(n-1);
    }
}

int main()
{
    int n;

    printf("Digite um numero inteiro maior que 0: ");
    scanf("%d", &n);

    iterativa(n);

    printf("\n\nversao recursiva: ");
    recursiva(n);

    printf("\n\n");

}
