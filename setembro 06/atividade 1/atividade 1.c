#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *f1, *f2;
    f1 = fopen("arq1.txt", "w");
    f2 = fopen("arq2.txt", "w");

    if(f1 == NULL || f2 == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }

    char texto[60];

    printf("Digite um texto: ");
    fgets(texto, 60, stdin);

    int i;
    char c = fgetc(f1);
    for (i = 0; i < strlen(texto); i++) {
        fputc(texto[i], f1);
    }

    printf("%s", texto);

    while(c != EOF) {
        printf("%c", c);
        c = fgetc(f1);
    }

    fclose(f1);
    fclose(f2);

    f1 = fopen("arq1.txt", "r");
    f2 = fopen("arq2.txt", "w");
    char b = fgetc(f2);

    while(b != EOF) {
        printf("%c", b);
        b = fgetc(f2);
    }

    int j;
    for (j = 0; j < strlen(texto); j++) {
        fputc(toupper(texto[j]), f2);
    }

    printf("%s", texto);


    printf("\n\n\n");
    fclose(f2);
    system("pause");
    return 0;
}
