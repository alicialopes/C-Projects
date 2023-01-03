#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ponto {
	float x;
	float y;
} PONTO;

typedef struct retangulo_pontos {
	PONTO ponto_superior;
	PONTO ponto_inferior;
} RETANGULO;

float calcula_area(float base, float altura);

float calcula_perimetro(float base, float altura);

float calcula_diagonal(float base, float altura);
