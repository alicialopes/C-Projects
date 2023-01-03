#include <stdio.h>
#include <stdlib.h>

int recursiva(int n);

int recursiva(int n) {
    if (n == -1) {
        return 0;
    }
    1 + recursiva (n-1);
    printf("\n%d", n);
}

int main()
{
    int n, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    recursiva(n);

    printf("\n\n");

}

