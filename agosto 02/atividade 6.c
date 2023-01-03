#include <stdio.h>
#include <string.h>
int main() {
    char string[51];
    int cont;

    printf("Digite um texto pequeno: ");
    fgets(string, sizeof(string), stdin);

    int len = strlen(string);

    for(int x = 0; x < strlen(string); x++) {
        if(string[x] == ' ') {
            cont++;
        }
    }

    for (int i = 0, posicao = 0; i < len; i++, posicao++) {
        if (string[posicao] == ' ')
        {
            posicao++;
        }
        string[i] = string[posicao];
    }

    printf("O espaco em branco aparece %d vez(es) no pequeno texto", cont);
    printf("\nString sem espacos: %s\n", string);

}
