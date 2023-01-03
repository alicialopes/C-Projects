#include <stdio.h>
#include <stdlib.h>
#include "filaD.h"

int main()
{
    int x;
    Fila *fi;
    fi = cria_fila();

    x = fila_vazia(fi);
    if(x) {
        printf("\nA fila esta vazia!");
    } else {
        printf("\nA fila nao esta vazia.");
    }

    struct aluno al1, al2, al3, dados_luno;

    al1.matricula = 100;
    al1.n1 = 5.3;
    al1.n2 = 6.9;
    al1.n3 = 7.4;

    al2.matricula = 120;
    al2.n1 = 4;
    al2.n2 = 2.9;
    al2.n3 = 8.4;

    al3.matricula = 110;
    al3.n1 = 1.3;
    al3.n2 = 2.9;
    al3.n3 = 3.4;

    x = insere_fila(fi, al1);
    if(x) {
        printf("\n\nElemento inserido com sucesso!");
    } else {
        printf("\nErro, elemento nao inserido.");
    }

    x = insere_fila(fi, al2);
    if(x) {
        printf("\nElemento inserido com sucesso!");
    } else {
        printf("\nErro, elemento nao inserido.");
    }

    x = insere_fila(fi, al3);
    if(x) {
        printf("\nElemento inserido com sucesso!");
    } else {
        printf("\nErro, elemento nao inserido.");
    }

    x = tamanho_fila(fi);
    printf("\n\nO tamanho da fila e: %d", x);

    x = fila_cheia(fi);
    if(x) {
        printf("\nA fila esta cheia!");
    } else {
        printf("\nA fila nao esta cheia.");
    }

    x = consulta_fila(fi, &al1);
    if(x) {
        printf("\n\nConsulta realizada com sucesso:");
        printf("\nMatricula: %d", al1.matricula);
        printf("\nNota 1:    %.2f", al1.n1);
        printf("\nNota 2:    %.2f", al1.n2);
        printf("\nNota 3:    %.2f", al1.n3);
    } else {
        printf("\nErro, consulta nao realizada");
    }

    x = remove_fila(fi);
    if(x) {
        printf("\n\nElemento removido com sucesso!");
    } else {
        printf("\nErro, elemento nao removido");
    }

    printf("\n\n\n");

    destroi_fila(fi);
}
