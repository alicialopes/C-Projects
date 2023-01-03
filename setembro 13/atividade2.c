#include <stdio.h>
#include <stdlib.h>

int main() {
    int aluno, *vet, i, soma = 0;

    printf("digite a quantidade de alunos da turma: ");
    scanf("%d", &aluno);

    vet = (int*) malloc(aluno *sizeof(int));

    if(vet == NULL) {
        printf("ERRO: SEM MEMORIA");
        exit(1);
    }

    for (i = 0; i < aluno; i++) {
        printf("digite a nota do aluno %d: ", i+1);
        scanf("%d", &vet[i]);
        soma += vet[i];
    }

    printf("\n\nNOTAS:\n");

    for (i = 0; i < aluno; i++) {
        printf("aluno %d: %d\n", i+1, vet[i]);
    }

    printf("\n\nMEDIA DA TURMA:\n");

    printf("%d", soma/aluno);

    free(vet);

    printf("\n\n");
}
