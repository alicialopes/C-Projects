#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Escreva um programa que leia as coordenadas 𝑥 e 𝑦 de pontos no plano cartesiano e
calcule sua distância da origem (0, 0)*/


int main() {
    float x = 0, y = 0, distancia = 0;

    printf ("insira a coordenada x: ");
    scanf ("%f", &x);
    printf ("insira a coordenada y: ");
    scanf ("%f", &y);

    distancia = sqrt(pow(x,2) + pow(y,2));

    printf("\na distancia e: %f \n", distancia);
    fflush(stdin);
    getchar();
    return 0;
}
