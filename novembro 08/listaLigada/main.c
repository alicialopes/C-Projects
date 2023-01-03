#include <stdio.h>
#include <stdlib.h>
#include "listaLigada.h"

int main()
{
    Lista *li; // ponteiro para ponteiro que esta no arquivo .h

    li = criaLista();

    if(listaCheia(li)) {
        printf("\nLista esta cheia.");
    } else {
        printf("\nLista esta vazia.");
    }

    if(listaVazia(li)) {
        printf("\nLista esta vazia.");
    } else {
        printf("\nLista nao esta vazia.");
    }

    int x, mat = 110, posicao = 1;
    struct aluno al1, al, al2, al3, dados_luno;

    al1.matricula = 90;
    al1.n1 = 3.3;
    al1.n2 = 5.9;
    al1.n3 = 7;

    al.matricula = 100;
    al.n1 = 5.3;
    al.n2 = 6.9;
    al.n3 = 7.4;

    al2.matricula = 120;
    al2.n1 = 4;
    al2.n2 = 2.9;
    al2.n3 = 8.4;

    al3.matricula = 110;
    al3.n1 = 1.3;
    al3.n2 = 2.9;
    al3.n3 = 3.4;

    x = insere_inicio_lista(li, al);
    if(x) {
        printf("\nInserido no inicio com sucesso!");
    } else {
        printf("\nNao foi possivel inserir no inicio.");
    }

    x = insere_final_lista(li, al2);
    if(x) {
        printf("\nInserido no final com sucesso!");
    } else {
        printf("\nNao foi possivel inserir no final.");
    }

    x = insere_lista_ordenada(li, al3);
    if(x) {
        printf("\nInserido ordenadamente com sucesso!");
    } else {
        printf("\nNao foi possivel inserir ordenadamente.");
    }

    x = tamLista(li);
    printf("\nO tamanho da lista e: %d", x);

    x = consulta_lista_pos(li, posicao, &al);
    printf("\n\nConteudo encontrado na posicao %d:", posicao);
    printf("\n%d", al.matricula);
    printf("\n%.2f", al.n1);
    printf("\n%.2f", al.n2);
    printf("\n%.2f\n", al.n3);

    x = consulta_lista_mat(li, mat, &al);
    printf("\n\nMatricula encontrada na posicao %d:", posicao);
    printf("\n%d", al.matricula);
    printf("\n%.2f", al.n1);
    printf("\n%.2f", al.n2);
    printf("\n%.2f\n", al.n3);

    x = remove_inicio_lista;
    if(x) {
        printf("\nRemovido do inicio com sucesso!");
    } else {
        printf("\nNao foi possivel remover do inicio.");
    }

    x = remove_final_lista(li);
    if(x) {
        printf("\nRemovido do final com sucesso!");
    } else {
        printf("\nNao foi possivel remover do inicio.");
    }

    x = remove_lista(li, mat);
    if(x) {
        printf("\nRemovido o elemento com sucesso!");
    } else {
        printf("\nNao foi possivel remover o elemento.");
    }







    apagaLista(li);

    printf("\n\n");
}

