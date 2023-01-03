#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro {
    char nome[30];
    int idade;
    char endereco[60];
} PESSOA;

PESSOA coleta_dados();
void gravar(PESSOA *pessoa, int n);

void main() {
    int n;

    printf("digite a quantidade de pessoas para realizar o cadastro: ");
    scanf("%d", &n);

    PESSOA *pessoa = (PESSOA*) malloc(n * sizeof(PESSOA));

    if (pessoa == NULL) {
        printf("\nERRO");
        exit(1);
    }

    int i;
    for(i = 0; i < n; i++) {
        pessoa[i] = coleta_dados();
    }


    gravar(pessoa, n);

    free(pessoa);
}

PESSOA coleta_dados() {
    PESSOA pessoa;

    printf("\ndigite o nome: ");
    fflush(stdin);
    fgets(pessoa.nome, 29, stdin);

    printf("\ndigite a idade: ");
    scanf("%d", &pessoa.idade);

    printf("\ndigite o endereco: ");
    fflush(stdin);
    fgets(pessoa.endereco, 59, stdin);
}

void gravar(PESSOA *pessoa, int n) {
    FILE *f;
    f = fopen("pessoas.txt", "ab");

    if(f == NULL) {
        printf("Erro na abertura");
        system("pause");
        exit(1);
    }

    int gravar;

    while(int i = 0; i < n; i ++){
        gravar = fwrite(pessoa, sizeof(PESSOA), n, f);
    }

    fclose(f);
}


