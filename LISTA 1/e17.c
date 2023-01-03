#include <stdio.h>
#include <stdlib.h>

//Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o número de dias trabalhados pelo encanador
// e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% para imposto de renda.

int main() {
    float dias, valorDia = 30.00, imposto, salario;

    printf("digite a quantidade de dias trabalhados pelo trabalhador:  ");
    scanf("%f" , &dias);

    imposto = valorDia * 0.08;
    salario = valorDia - imposto;

    printf("\nquantia líquida que deverá ser pag: R$%.2f" , salario * dias);

    printf("\n\n");
    system("pause");
    return 0;
}
