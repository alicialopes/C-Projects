#include <stdio.h>
#include <stdlib.h>

/*    Ler um valor de área em hectares e apresentá-lo convertido em metros quadrados 𝑚². A
fórmula de conversão é: 𝑀 = 𝐻 ∗ 10000 , sendo 𝑀 aárea em metros quadrados e 𝐻 a área em
hectares.  */

int main() {
    float hec, m2;

    printf("Digite a area em hectares: ");
    scanf("%f", &hec);

    m2 = hec * 1000;

    printf("\nA area em m2 e: %.2f",m2);
    return 0;
}

