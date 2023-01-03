#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct funcionario {
    int id;
    char nome[30];
    int idade;
    float salario;
};

void main() {
    struct funcionario func[4];

    for (int x = 0; x <= 4; x++) {
        printf("\ndigite o nome do funcionario %d: ", x+1);
        fgets(func[x].nome, 30, stdin);
        func[x].nome[strlen(func[x].nome) - 1 ] = '\0';
        printf("\ndigite o id, idade e salario do funcionario %d: ", x + 1);
        scanf("%d%d%f", &func[x].id, &func[x].idade, &func[x].salario);

        fflush(stdin);
    }

    for (int x = 0; x <= 4; x++) {
        printf("\n\n\tfuncionario %d:\n", x+1);
        printf("\nid: %d", func[x].id);
        printf("\nnome: %s", func[x].nome);
        printf("\nidade: %d", func[x].idade);
        printf("\nsalario: %.2f\n\n\n", func[x].salario);
    }


}
