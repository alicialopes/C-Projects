#include <stdio.h>
#include <stdlib.h>

/* Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo a escada.
Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo, sem se preocupar com a altura do usuário */

int main() {
    float alturaDegrau, desejoAltura, degraus;

    printf("Insira a altura do degrau em centimetros: ");
    scanf("%f", &alturaDegrau);

    printf("Qual altura deseja alcancar em metros:");
    scanf("%f", &desejoAltura);

    degraus = (alturaDegrau*100) / desejoAltura;
    printf("\nquantidade de degraus para alcancar a altura e: %.0f" , degraus);

    return 0;
}
