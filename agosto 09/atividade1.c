#include <stdio.h>
#include <stdlib.h>

float salarioBruto, salarioFamilia, vantagens, inss, irpf, deducoes;

void calculoDeducoes(float taxaIR);

void calculoVantagens(float numHoras, float salarioHoras, int numFilhos, float valorPFilho);

int main()
{
    float numHoras, salarioHoras, valorPFilho, salario, taxaIR;
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

    calculoVantagens(numHoras, salarioHoras, numFilhos, valorPFilho);
    calculoDeducoes(taxaIR);

    printf("\nsalario bruto: %.2f\n", salarioBruto);
    printf("salario familia: %.2f\n", salarioFamilia);
    printf("vantagens: %.2f\n", vantagens);
    printf("inss: %.2f\n", inss);
    printf("irpf: %.2f\n", irpf);
    printf("deducoes: %.2f\n\n", deducoes);

}

void calculoVantagens(float numHoras, float salarioHoras, int numFilhos, float valorPFilho) {
    salarioBruto = numHoras * salarioHoras;
    salarioFamilia = numFilhos * valorPFilho;
    vantagens = salarioBruto + salarioFamilia;
}

void calculoDeducoes(float taxaIR) {
    inss = salarioBruto * 0.08;
    irpf = salarioBruto * taxaIR;
    deducoes = inss + irpf;
}
