#include <stdio.h>
#include <stdlib.h>

/* A import�ncia de R$ 780.000,00 ser� dividida entre tr�s ganhadores de um concurso.
Sendo que da quantia total:
- O primeiro ganhador receber� 46%;
- O segundo receber� 32%;
- O terceiro receber� o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores. */

int main() {
    float importancia = 780000;
    float ganhador1, ganhador2, ganhador3;

    printf("valor total: R$%.2f", importancia);

    ganhador1 =  importancia * 0.46;
    printf("\nO primeiro ganhador recebera R$%.2f", ganhador1);

    ganhador2 =  importancia * 0.32;
    printf("\nO segundo recebera R$%.2f", ganhador2);

    ganhador3 =  importancia * 0.22;
    printf("\nO terceiro recebera R$%.2f", ganhador3);

    printf("\n\n");
    system("pause");
    return 0;
}
