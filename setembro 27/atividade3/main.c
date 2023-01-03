#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, result;
    int op;

    printf("1: soma \n2: subtracao \n3: multiplicacao \n4: divisao");
    printf("\n digite o valor 1: ");
    scanf("%f", &num1);

    printf("\n digite o valor 2: ");
    scanf("%f", &num2);

    printf("\n digite a operacao: ");
    printf("\n\nobs: digite 0 quando for encerrar a operacao\n");
    scanf("%d", &op);

    if (op == 0) {
        system("PAUSE");
    } else {
        switch(op) {
            case 1:
                soma(num1, num2, &result);
                break;

            case 2:
                subtrai(num1, num2, &result);
                break;

            case 3:
                multiplica(num1, num2, &result);
                break;

            case 4:
                divide(num1, num2, &result);
                break;

            default:
                printf("não existe essa opção");
                break;
        }
    }


}
