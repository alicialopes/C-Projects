#include <stdio.h>
#include <stdlib.h>

void main(){
    int var1, var2;

    printf("digite o valor da primeira variavel inteira: ");
    scanf("%d", &var1);

    printf("digite o valor da segunda variavel inteira: ");
    scanf("%d", &var2);

    if (&var1 > &var2) {
        printf("\nmaior endereco: %d", &var1);
        printf("\nconteudo do endereco: %d", var1);
    } else {
        printf("\nmaior endereco: %d", &var2);
        printf("\nconteudo do endereco: %d", var2);
    }

    printf("\n\n\n");
    system("pause");
}

