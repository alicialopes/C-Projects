#include <stdio.h>
#include <stdlib.h>

void main(void){
    int linhas, colunas, i, j;
    int **matriz1, **matriz2;

    printf("digite o numero de linhas: ");
    scanf("%d", &linhas);

    printf("digite o numero de colunas: ");
    scanf("%d", &colunas);

    // primeira matriz
    printf("\n======= MATRIZ 1 =======\n\n");

    matriz1 = (int **) malloc(linhas * sizeof(int*));

    for(i=0; i<linhas; i++) {
        matriz1[i] = (int*) malloc(colunas * sizeof(int));
    }

    printf("\nINSIRA OS VALORES:\n");

    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\n\nMATRIZ 1:\n");

    for(i=0; i<linhas; i++) {
        for(j=0; j<colunas; j++){
            printf("%d\t", matriz1[i][j]);
        }
        printf("\n");
    }


    // segunda matriz
    printf("\n\n\n======= MATRIZ 2 =======\n\n");

    matriz2 = (int **) malloc(linhas * sizeof(int*));

    for(i=0; i<linhas; i++) {
        matriz2[i] = (int*) malloc(colunas * sizeof(int));
    }

    printf("\nINSIRA OS VALORES:\n");

    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    printf("\n\nMATRIZ 2:\n");

    for(i=0; i<linhas; i++) {
        for(j=0; j<colunas; j++){
            printf("%d\t", matriz2[i][j]);
        }
        printf("\n");
    }


    // soma das matrizes
    printf("\n\n\n======= SOMA DAS MATRIZES =======\n\n");
    int C[linhas][colunas];

    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            C[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }


    for (i=0; i<linhas; i++) {
        free(matriz1[i]);
        free(matriz2[i]);
    } free(matriz1);
    free(matriz2);
}
