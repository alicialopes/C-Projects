#include <stdio.h>
#include <stdlib.h>

// FALTA MOSTRAR AS NOTAS DO ALUNO DE MAIOR MEDIA

typedef struct notas_aluno {
    int id;
    char nome[30];
	float nota[3];
} ALUNO;

int maiorMedia(ALUNO *alunos) {
	float media, mediaMaior=0;
	int i, I, j;

	for (i = 0; i < 5; i++) {
		media = 0;

		for (j = 0; j < 3; j++) {
			media += alunos[i].nota[j];
            media /= 3;

            if (media > mediaMaior) {
                mediaMaior = media;
                I = i;
            }
		}
	}

	return I;
}

int main() {
	int i, j;

	ALUNO *alunos = (ALUNO*) malloc(5 * sizeof(ALUNO));

	if (alunos == NULL) {
        printf("ERRO");
        exit(1);
	}

	for (i = 0; i < 5; i++) {
		printf("\n--- ALUNO %d ---", (i+1));

		printf("\nMatricula: ");
		scanf("%d", &alunos[i].id);

		printf("Nome: ");
		fflush(stdin);
		gets(alunos[i].nome);

		for (j = 0; j < 3; j++) {
			printf("Nota %d: ", (j+1));
			scanf("%d", &alunos[i].nota[j]);
		}
	}

	i = maiorMedia(alunos);
	printf("\n--- MAIOR MEDIA ---");
	printf("\nAluno: %s.\n\n", alunos[i].nome);
    for (j = 0; j < 3; j++) {
        printf("Nota: %.2f\n\n", alunos[i].nota[j]);
    }

    free(alunos);
}

