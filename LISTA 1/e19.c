#include <stdio.h>
#include <stdlib.h>

//Receba o sal�rio-base de um funcion�rio, calcule e imprima o sal�rio a receber, sabendo-se
// que esse funcion�rio tem uma gratifica��o de 5% sobre o sal�rio-base. Al�m disso, paga 7% de imposto sobre o sal�rio-base

int main() {
    float salario;

    printf("digite o salario: R$");
    scanf("%f", &salario);

    printf("\nsalario total: R$%.2f", (salario * 1.05) - (salario * 0.07));
    printf("\n\n");
    system("pause");
    return 0;
}
