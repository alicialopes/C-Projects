#include <stdio.h>
#include <stdlib.h>

// Receba o sal�rio de um funcion�rio, calcule e imprima o valor do novo sal�rio, sabendo que
// ele recebeu um aumento de 25%.

int main() {
    float salario, novosal;

    printf("insira o salario: ");
    scanf("%f", &salario);

    novosal = salario * 1.25;

    printf("salario atual com o aumento: %.2f\n\n", novosal);

    system("pause");
    return 0;
}
