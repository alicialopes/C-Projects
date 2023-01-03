#include <stdio.h>
#include <stdlib.h>
#include "atv3.h"

int main()
{
    calculo *num1, *num2;
    float result;
    int op;

    if (op == 0)
    {
        system("PAUSE");
    }
    else
    {
        printf("1: soma \n2: subtracao \n3: multiplicacao \n4: divisao");
        printf("\ndigite o valor 1: ");
        scanf("%f", &num1);

        printf("\ndigite o valor 2: ");
        scanf("%f", &num2);

        printf("\n\nobs: digite 0 quando for encerrar a operacao\n\n");
        printf("\ndigite a operacao: ");
        scanf("%d", &op);
        switch(op)
        {
        case 1:
            somar(calculo *num1, calculo *num2, &result);
            break;

        case 2:
            subtrair(calculo *num1, calculo *num2, &result);
            break;

        case 3:
            multiplicar(calculo *num1, calculo *num2, &result);
            break;

        case 4:
            dividir(calculo *num1, calculo *num2, &result);
            break;

        default:
            printf("nao existe essa opcao");
            break;
        }
    }

}
