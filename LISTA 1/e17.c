#include <stdio.h>
#include <stdlib.h>

//Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o n�mero de dias trabalhados pelo encanador
// e imprima a quantia l�quida que dever� ser paga, sabendo-se que s�o descontados 8% para imposto de renda.

int main() {
    float dias, valorDia = 30.00, imposto, salario;

    printf("digite a quantidade de dias trabalhados pelo trabalhador:  ");
    scanf("%f" , &dias);

    imposto = valorDia * 0.08;
    salario = valorDia - imposto;

    printf("\nquantia l�quida que dever� ser pag: R$%.2f" , salario * dias);

    printf("\n\n");
    system("pause");
    return 0;
}
