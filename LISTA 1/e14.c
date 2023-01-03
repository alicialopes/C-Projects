#include <stdio.h>
#include <stdlib.h>

// Faça um programa que possa entrar com o valor de um produto e imprima o valor tendo em vista que o desconto foi de 12% */

int main() {
    float prod, desconto, valor;

    printf("insira o preco do produto: ");
    scanf("%f" , &prod);

    desconto =  prod * 0.12;
    valor = prod - desconto;

    printf("o valor atualizado do produto com desconto e: %.2f\n\n", valor);

    system("pause");
    return 0;
}
