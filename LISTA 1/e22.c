#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Fa�a um programa para converter uma letra mai�scula em letra min�scula. Use a tabela ASCII.

int main(void) {
    char letra;

    printf("insira uma letra minuscula: ");
    scanf("%c", &letra);
    letra = toupper(letra);

    printf("\nletra em maiusculo: %c\n\n" , letra);

    system("pause");
    return 0;
}
