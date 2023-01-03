#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct funcionario{
    int id;
    char nome[30];
    int idade;
    float salario;
}FUNCIO;

FUNCIO coletarDados();
void imprimirDados(FUNCIO *func, int n);
void reajuste(float *f);
void rel_salario_corrigido(FUNCIO *func, int n);

void main(){
    int i, n = 4;
    FUNCIO func[n];
    for(i = 0; i < n; i++){
        func[i] = coletarDados();
        printf("\n");
    }

    imprimirDados(func, n);

    for(i = 0; i < n; i++) {
        reajuste(&func[i].salario);
    }

    rel_salario_corrigido(func, n);

}

FUNCIO coletarDados(){
    FUNCIO func;
    printf("ID funcionario: ");
    scanf("%d", &func.id);
    printf("NOME funcionario: ");
    getchar();
    gets(func.nome);
    printf("IDADE funcionario: ");
    scanf("%d", &func.idade);
    printf("SALARIO funcionario: ");
    scanf("%f", &func.salario);
    return func;
}

void imprimirDados(FUNCIO *func, int n){
    int i;
    printf("\n\n\tDADOS coletados do funcionario:\n");
    for(i = 0; i < n; i++){
        printf("\tID: %d\n", func[i].id);
        printf("\tNOME: %s\n", func[i].nome);
        printf("\tIDADE: %d\n", func[i].idade);
        printf("\tSALARIO: %.2f\n", func[i].salario);
        printf("\n");
    }
}

void reajuste(float *f){
    *f = *f * 1.1;
}

void rel_salario_corrigido(FUNCIO *func, int n){
    int i;
    printf("\n\n\tREAJUSTE no salario do funcionario:\n");
    for(i = 0; i < n; i++){
        printf("\tNOME: %s\n", func[i].nome);
        printf("\tSALARIO: %.2f\n", func[i].salario);
        printf("\n");
    }
}

