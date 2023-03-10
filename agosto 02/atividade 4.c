#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declara??o da matriz com 5 linhas e 5 colunas
    int m[5][5], v[10];
    int i = 0, j = 0, soma = 0;
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite os valores da matriz na posicao %d e %d: ", i, j);
            // efetua a leitura de todos os campos da matriz
            scanf("%d", &m[i][j]);
        }
    }
    
    
    // impress?o da matriz
    printf("\n\nMatriz:\n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++) {
            printf("\t%d", m[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

    /*
    soma as linhas da matriz, percorre por todas as colunas atraves do "j"
    e por todas as linhas atraves do "i"
    */
    
    printf("\n\nTotal por linha:\n\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            soma = soma + m[i][j]; 
        }
        printf("\nLinha %d: soma = %d\n", i + 1, soma);
        v[i] = soma;
        soma = 0;
    }
    
    /*
    soma as linhas da matriz, percorre por todas as colunas atraves do "i"
    e por todas as linhas atraves do "j"
    */

    soma = 0;    
    printf("\n\nTotal por coluna:\n\n");
    for (j = 0; j < 5; j++){
        for (i = 0; i < 5; i++) {
            soma = soma + m[i][j];
        }
        printf("\nColuna %d: soma = %d\n", j + 1, soma);
        v[j + 5] = soma;
        soma = 0;
    }
    
    // totaliza??o linhas e colunas
    for(i = 0; i < 5; i++) {
        printf("\nOs valores da soma da linha %d s?o: %d\n", i + 1, v[i]);
        printf("\nOs valores da soma da coluna %d s?o: %d\n", i + 1, v[i + 5]);
    }
}
