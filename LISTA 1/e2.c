#include <stdio.h>
#include <stdlib.h>

int main()
{
    //  Peça ao usuário para digitar três valores inteiros e
    // imprima a soma deles.


    // tres valores int
    int a, b, c, soma;

    printf("digite o primeiro valor: ");
    scanf("%d", &a);

    printf("digite o segundo valor: ");
    scanf("%d", &b);

    printf("digite o terceiro valor: ");
    scanf("%d", &c);

    // soma
    soma = a + b + c;
    printf("%d + %d + %d = %d\n", a, b, c, soma);

    system("pause");
    return 0;
}

