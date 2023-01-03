#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "retangulo.h"

int main() {
	float base, altura;
	float area, perimetro, diagonal;
	RETANGULO retangulo;

	printf("\nDigite as informacoes do ponto superior esquerdo: ");
	printf("\nCoordenada x: ");
	scanf("%f", &retangulo.ponto_superior.x);
	printf("\nCoordenada y: ");
	scanf("%f", &retangulo.ponto_superior.y);

	printf("\nDigite as informacoes do ponto superior esquerdo: ");
	printf("\nCoordenada x: ");
	scanf("%f", &retangulo.ponto_inferior.x);
	printf("\nCoordenada y: ");
	scanf("%f", &retangulo.ponto_inferior.y);

	base =  retangulo.ponto_superior.x - retangulo.ponto_inferior.x;
	altura = retangulo.ponto_superior.y - retangulo.ponto_inferior.y;
	printf("%f", base);
    printf("%f", altura);

	area = calcula_area(base, altura);
	perimetro = calcula_perimetro(base, altura);
	diagonal = calcula_diagonal(base, altura);

	printf("\nCalculando...");
	printf("\nArea: %.2f", area);
	printf("\nPerimetro: %.2f", perimetro);
	printf("\nDiagonal: %.2f\n\n", diagonal);

	return 0;
}




