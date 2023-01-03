#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vet;
    vet = (int*) malloc(100 *sizeof(int));

    if(vet == NULL) {
        printf("ERRO: SEM MEMORIA");
        exit(1);
    }

    printf("numeros impares ate o 100: \n");

    int i;
    for (i = 0; i < 100; i++) {
        if (i % 2 != 0) {
            vet[i] = i;
            printf("%d\n", vet[i]);
        }
    }

    free(vet);
}
