#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Leia um valor em real e a cotação do dólar.
    // Em seguida, imprima o valor correspondente em dólares.

    float real = 25.00, dolar = 5.11;

    printf("real: R$%.2f\n", real);
    printf("cotacao dolar: %.2f\n", dolar);
    printf("valor em dolar: $%.2f\n\n", real * dolar);

    system("pause");
    return 0;
}


