#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaracao dos vetores com 5 posicoes
    int v1[5], v2[5];
    int i = 0, j = 0, var = 0;

    // preenchendo vetor 1
    for (i = 0; i < 5; i++) {
        printf("\nInforme o valor do elemento %d do vetor 1: ", i + 1);
        // leitura e inser��o do valor em cada posi��o do vetor:
        scanf("%d", &v1[i]);
    }

    // preenchendo vetor 2
    for (j = 0; j < 5; j++) {
        printf("\nInforme o valor do elemento %d do vetor 2: ", j + 1);
        // leitura e inser��o do valor em cada posi��o do vetor:
        scanf("%d", &v2[j]);
    }

    // exibindo os vetores
    printf("\n\n Vetor 1:\n");
    for (i = 0; i < 5; i++){
        printf("\t");
        printf("%d", v1[i]);
    }
    
    printf("\n\n Vetor 2:\n");
    for (j = 0; j < 5; j++){
        printf("\t");
        printf("%d", v2[j]);
    }
    
    printf("\n\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++){
            // exibindo valores que sao comuns aos dois vetores:
            if(v1[i] == v2[j]) {
                var++;
                printf("\nValores iguais na posicao: %d e %d\n", i + 1, j + 1);
            }
        }
    }

    if (var == 0){
        printf("Nao existem valores comuns");
    }

    system("pause");
}

