#include <stdio.h>
#include <stdlib.h>
#include "minhalib.h"

void calculoVantagens(float numHoras, float salarioHoras, int numFilhos, float valorPFilho, float *salarioBruto, float *salarioFamilia, float *vantagens) {
    *salarioBruto = numHoras * salarioHoras;
    *salarioFamilia = numFilhos * valorPFilho;
    *vantagens = *salarioBruto + *salarioFamilia;
}

void calculoDeducoes(float taxaIR, float *salarioBruto, float *inss, float *irpf, float *deducoes) {
    *inss = *salarioBruto * 0.08;
    *irpf = *salarioBruto * taxaIR;
    *deducoes = *inss + *irpf;
}
