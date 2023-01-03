#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "listaClientes.h"
#include "funcoesAuxiliares.h"

void menu() {
    pula1Linha;
    printf("Voce possui as seguintes opcoes: \n");
    printf("1. Insercao de novo cliente\n");
    printf("2. Geracao de relatorio total\n");
    printf("3. Geracao de relatorio individual - codigo\n");
    printf("4. Geracao de relatorio pelo nome\n");
    printf("5. Edicao de dados do cliente\n");
    printf("6. Remocao de cliente\n");
    printf("7. Sair do programa\n");
}

int resp_menu() {
    int x;
    pula2Linhas;
    printf("Digite a opcao desejada: \n");
    scanf("%d", &x);

    return x;
}
