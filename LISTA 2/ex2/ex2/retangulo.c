#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "retangulo.h"

float calcula_area(float base, float altura) {
    return base * altura;
}

float calcula_perimetro(float base, float altura) {
    return 2 * (base + altura);
}

float calcula_diagonal(float base, float altura) {
    return sqrt(pow(base, 2) + pow(altura, 2));
}
