#include <stdio.h>
#include <stdlib.h>

void main(){
    int var1, var2, var3;
    int *p1, *p2, *p3;

    printf("digite o valor da primeira variavel inteira: ");
    scanf("%d", &var1);

    printf("digite o valor da segunda variavel inteira: ");
    scanf("%d", &var2);

    printf("digite o valor da terceira variavel inteira: ");
    scanf("%d", &var3);

    p1 = &var1;
    p2 = &var2;
    p3 = &var3;

    soma(p1, var1);
    soma(p2, var2);
    soma(p3, var3);


    printf("\n%d", *p1);
    printf("\n%d", *p2);
    printf("\n%d", *p3);


    printf("\n\n\n");
    system("pause");
}

void soma(int *p, int var) {
    *p = var + 100;
}
