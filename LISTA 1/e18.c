#include <stdio.h>
#include <stdlib.h>

// Fa�a um programa que leia o valor da hora de trabalho (em reais) e n�mero de horas trabalhadas no m�s,
// e imprima o valor a ser pago ao funcion�rio, adicionando 10% sobre o valor calculado

int main() {
    float horaValor = 25, horaTrab;

    printf("valor por hora: R$%.2f", horaValor);

    printf("\ndigite quantas horas foram trabalhadas no mes: ");
    scanf("%f", &horaTrab);

    printf("salario: R$%.2f\n\n", horaValor * horaTrab * 1.1);

    system("pause");
    return 0;
}
