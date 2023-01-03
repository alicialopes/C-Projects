#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    /* Sejam 𝑎 e 𝑏 os catetos de um triângulo, onde a hipotenusa é obtida pela equação: ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎 = √𝑎2 + 𝑏2.
    Faça um programa que receba os valores de 𝑎 e 𝑏 e encontre o valor da hipotenusa através da equação.
    Imprima no final o resultado dessa operação. */

    int a, b;
    float hipot;

    printf("Digite o valor do cateto a: ");
    scanf("%d", &a);

    printf("Digite o valor do cateto b: ");
    scanf("%d", &b);

    hipot = sqrt((a* a) + (b* b));

    printf("Valor da hipotenusa: %.2f\n\n", hipot);

    system("pause");
    return 0;
}
