#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h" // inclui os prototipos

// definição de tipos de dados
struct ponto {
    float x;
    float y;
};

// aloca e retorna um ponto com coordenadas "x" e "y"
Ponto *pto_cria(float x, float y) {
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    if (p != NULL) {
        p->x = x;
        p->y = y;
    }
    return p;
}

// libera a memoria alocada para um ponto
void pto_libera(Ponto *p) {
    free(p);
}

// recupera, por referencia, o valor de um ponto
void pto_acessa(Ponto *p, float *x, float *y) {
    *x = p->x;
    *y = p->y;
}

// atribui a um ponto as coordenadas "x" e "y"
void pto_atribui(Ponto *p, float x, float y) {
    p->x = x;
    p->y = y;
}

// calcula a distancia entre dois pontos
float pto_distancia(Ponto *p1, Ponto *p2) {
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx * dx + dy * dy);
}

