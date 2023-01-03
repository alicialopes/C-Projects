#include <stdio.h>
#include <stdlib.h>
#include "pilhaD.h"

int main()
{
    int x;
    Pilha *pi;
    pi = cria_pilha();

    x = pilha_vazia(pi);
    if(x) {
        printf("\nA pilha esta vazia!");
    } else {
        printf("\nA pilha nao esta vazia.");
    }

    struct aluno al1, al2, al3;

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

    x = insere_pilha(pi, al1);
    if(x) {
        printf("\n\nElemento inserido com sucesso!");
    } else {
        printf("\nErro, elemento nao inserido.");
    }

    x = insere_pilha(pi, al2);
    if(x) {
        printf("\nElemento inserido com sucesso!");
    } else {
        printf("\nErro, elemento nao inserido.");
    }

    x = insere_pilha(pi, al3);
    if(x) {
        printf("\nElemento inserido com sucesso!");
    } else {
        printf("\nErro, elemento nao inserido.");
    }


    x = tamanho_pilha(pi);
    printf("\n\nO tamanho da pilha e: %d", x);

    x = pilha_cheia(pi);
    if(x) {
        printf("\nA pilha esta cheia!");
    } else {
        printf("\nA pilha nao esta cheia.");
    }

    x = consulta_pilha(pi, &al3);
    if(x) {
        printf("\n\nConsulta realizada com sucesso:");
        printf("\nMatricula: %d", al3.matricula);
        printf("\nNota 1:    %.2f", al3.n1);
        printf("\nNota 2:    %.2f", al3.n2);
        printf("\nNota 3:    %.2f", al3.n3);
    } else {
        printf("\nErro, consulta nao realizada");
    }

    x = remove_pilha(pi);
    if(x) {
        printf("\n\nElemento removido com sucesso!");
    } else {
        printf("\nErro, elemento nao removido.");
    }

    printf("\n\n\n");

    destroi_pilha(pi);
}
