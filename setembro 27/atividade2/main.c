#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main(int argc, char *argv[])
{
    float d;
    Ponto *p, *q;

    p = pto_cria(10, 21);
    q = pto_cria(7, 25);
    d = pto_distancia(p, q);

    printf("distancia entre os pontos: %f\n", d);
    pto_libera(p);
    pto_libera(q);

    system("PAUSE");
    return 0;
}
