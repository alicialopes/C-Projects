#include <stdio.h>
#include <stdlib.h>

void main(){
    float vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;

    for(i=0; i<10; i++) {
       printf("\nposicao %d = %d", i, &vetor[i]);
    }

    printf("\n\n\n");
    system("pause");
}
