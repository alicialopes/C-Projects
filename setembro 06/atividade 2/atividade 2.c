#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct funcionario{
    int id;
    char nome[30];
    int idade;
    float salario;
};

void main(){
    FILE *f;
    f = fopen("arq1.txt", "wb");

    struct funcionario func[4];

    // adicionando os valores
    for(int x = 0; x <= 4 ; x++){
        printf("Insira os dados do funcionario %d\n", x+1);
        printf("Insira o id: ");
        scanf("%d", &func[x].id);
        printf("Insira o nome: ");
        scanf("%s", &func[x].nome);
        printf("Insira a idade: ");
        scanf("%d", &func[x].idade);
        printf("Insira o salario: ");
        scanf("%f", &func[x].salario);
        printf("\n\n");
    }

    fwrite(func, sizeof(struct funcionario), 5, f);
    fclose(f);

    // lendo os valores
    FILE *f1;
    f1 = fopen("arq1.txt", "rb");

    struct funcionario ler;
    fseek(f1, 2*sizeof(struct funcionario), SEEK_SET);

    fread(&ler, sizeof(struct funcionario), 1, f1);

    // imprimindo o terceiro elemento
    printf("\n\nID: %d\nNome: %s\nIdade: %d\nSalario: %.2f\n\n", ler.id, ler.nome, ler.idade, ler.salario);
    fclose(f1);

}
