#include <stdio.h>
#include <stdlib.h>

//float salarioBruto, salarioFamilia, vantagens, inss, irpf, deducoes;

void calculoDeducoes(float taxaIR, float *salarioBruto, float *inss, float *irpf, float *deducoes);

void calculoVantagens(float numHoras, float salarioHoras, int numFilhos, float valorPFilho, float *salarioBruto, float *salarioFamilia, float *vantagens);

int main(void)
{
    float numHoras, salarioHoras, valorPFilho, salario, taxaIR, salarioBruto, inss, irpf, deducoes, salarioFamilia, vantagens;
    int numFilhos;

    printf("digite o numero de horas que voce trabalha: ");
    scanf("%f", &numHoras);

    printf("digite o valor/hora: ");
    scanf("%f", &salarioHoras);

    printf("digite quantos filhos voce tem: ");
    scanf("%d", &numFilhos);

    printf("digite o salario de cada filho: ");
    for(int i = 0; i < numFilhos; i++) {
        scanf("%f", &salario);
        valorPFilho += salario;
    }
    valorPFilho = valorPFilho / numFilhos;

    printf("digite a taxa ir: ");
    scanf("%f", &taxaIR);

    calculoVantagens(numHoras, salarioHoras, numFilhos, valorPFilho, &salarioBruto, &salarioFamilia, &vantagens);
    calculoDeducoes(taxaIR, &salarioBruto, &inss, &irpf, &deducoes);

    printf("\nsalario bruto: %.2f\n", salarioBruto);
    printf("salario familia: %.2f\n", salarioFamilia);
    printf("vantagens: %.2f\n", vantagens);
    printf("inss: %.2f\n", inss);
    printf("irpf: %.2f\n", irpf);
    printf("deducoes: %.2f\n\n", deducoes);
}

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
