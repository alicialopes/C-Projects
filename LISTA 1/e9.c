#include <stdio.h>
#include <stdlib.h>

int main() {
    // Leia um número inteiro e imprima a soma do sucessor de seu triplo com o
    // antecessor de seu dobro

    int num = 2;

    printf("numero: %d\n" , num);
    printf("soma do do sucessor de seu triplo com o antecessor de seu dobro: %d\n\n", num * 3 + 1 + num * 2 - 1);

    system("pause");
    return 0;
}
