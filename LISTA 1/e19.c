#include <stdio.h>
#include <stdlib.h>

//Receba o salário-base de um funcionário, calcule e imprima o salário a receber, sabendo-se
// que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, paga 7% de imposto sobre o salário-base

int main() {
    float salario;

    printf("digite o salario: R$");
    scanf("%f", &salario);

    printf("\nsalario total: R$%.2f", (salario * 1.05) - (salario * 0.07));
    printf("\n\n");
    system("pause");
    return 0;
}
