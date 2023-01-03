#include <stdio.h>
#include <stdlib.h>

/* Escreva um algoritmo para criar um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
- O total a pagar com desconto de 10%;
- O valor de cada parcela, no parcelamento de 3 x sem juros;
- A comissão do vendedor, no caso de a venda ser a vista (5% sobre o valor com desconto)
- A comissão do vendedor, no caso de a venda ser parcelada (5% sobre o valor total) */

int main() {
    float valor;
    float vlrapagar;
    float parc3;
    float comissao;
    float comissao2;

    printf("valor total: ");
    scanf("%f", &valor);

    printf("\nvalor com desconto de 10%: R$%.2f" , valor * 0.9);
    printf("\nvalor parcela 3x: R$%.2f", valor / 3);
    printf("\ncomissao ao vender a vista: R$%.2f", (valor * 0.9)*0.05);
    printf("\ncomissao ao vender parcelado: R$%.2f\n\n", valor * 0.05);

    system("pause");
    return 0;
}
