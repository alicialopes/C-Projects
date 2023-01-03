#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*  Faça um programa para ler as dimensões de um terreno (comprimento 𝑐 e largura 𝑙), bem
como o preço do metro do arame 𝑝, então fornecer como saída o custo para cercar este
mesmo terreno*/

int main() {
    float largura, comprimento, preco, total;

    printf("\ninsira a largura do terreno: ");
    scanf("%f", &largura);

    printf("\ninsira o comprimento do terreno: ");
    scanf("%f", &comprimento);

    printf("\ninsira o preco do metro do arame: R$");
    scanf("%f", &preco);

    total = (comprimento*2 +  largura*2) * preco;
    printf("\ncusto para cercar o terreno: R$%.2f", total);

    return 0;
}
