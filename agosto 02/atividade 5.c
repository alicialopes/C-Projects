#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string1[20];
    char string2[20];
    char string3[20];
    char letra;
    int x, cont1 = 0, cont2 = 0;

    printf("Digite a primeira palavra: ");
    fgets(string1, 20, stdin);

    printf("Digite a segunda palavra: ");
    fgets(string2, 20, stdin);

    printf("Digite uma palavra para realizar uma busca parcial: ");
    gets(string3);

	printf("Digite o caracter a ser procurado nas palavras: ");
	scanf("%c", &letra);

    // contando a ocorrencia de "letra" nas strings

    for(x = 0; x < strlen(string1); x++) {
        if(string1[x] == letra) {
            cont1++;
        }
    }

    for(x = 0; x < strlen(string2); x++) {
        if(string2[x] == letra) {
            cont2++;
        }
    }

    printf("\nA letra \"%c\" aparece %d vez(es) na string 1, ", letra, cont1);
    printf("e %d vez(es) na string 2", cont2);


    // comparando strings
    if(strstr(string1, string3)) {
        printf("\n%s esta na string %s", string3, string1);
    } else {
        printf("\n%s NAO esta na string %s", string3, string1);
    }

    if(strstr(string2, string3)) {
        printf("\n%s esta na string %s", string3, string2);
    } else {
        printf("\n%s NAO esta na string %s", string3, string2);
    }
}
