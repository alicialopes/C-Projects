#include <stdio.h>
#include <stdlib.h>

// Implemente um programa em C que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual

int main() {
    int idade, anoAtual;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Insira em que ano estamos: ");
    scanf("%d", &anoAtual);

    printf("Voce nasceu em: %d\n\n", anoAtual - idade);

    system("pause");
    return 0;
}
