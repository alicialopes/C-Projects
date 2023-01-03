// arquivo principal main()

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaSequencial.h"

int main()
{
    int x; //ser� usado para codigo de erro
    Lista *li;
    li = cria_lista();

    int mat = 110, posicao = 1;

    struct aluno al, al2, al3, dados_aluno;

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

    x = insere_lista_final(li, al2);
    if(x) {
        printf("\nAluno inserido com sucesso!");
    } else {
        printf("\nErro, aluno nao inserido!");
    }

    x = insere_lista_inicio(li, al);
    if(x) {
        printf("\nAluno inserido com sucesso!");
    } else {
        printf("\nErro, aluno nao inserido!");
    }

    x = insere_lista_ordenada(li, al3);
    if(x) {
        printf("\nAluno inserido com sucesso!");
    } else {
        printf("\nErro, aluno nao inserido!");
    }

    x = tamanho_lista(li);
    printf("\n\nTamanho da lista e: %d", x);

    x = lista_cheia(li);
    if(x) {
      printf("\nLista cheia!");
    } else {
        printf("\nLista nao esta cheia!");
    }

    x = lista_vazia(li);
    if(x) {
        printf("\nLista esta vazia!");
    } else {
        printf("\nLista nao esta vazia!");
    }

    x = consulta_lista_pos(li, posicao, &dados_aluno);
    if(x) {
        printf("\n\nConsulta por posicao realizada com sucesso!");
        printf("\nMatricula: %d", dados_aluno.matricula);
        printf("\nNota 1: %.2f", dados_aluno.n1);
        printf("\nNota 2: %.2f", dados_aluno.n2);
        printf("\nNota 3: %.2f", dados_aluno.n3);
    } else {
        printf("\nNao foi possivel consultar na posicao especifica");
    }

    x = consulta_lista_mat(li, mat, &dados_aluno);
    if(x) {
        printf("\nConsulta por matricula realizada com sucesso!");
        printf("\nMatricula: %d", dados_aluno.matricula);
        printf("\nNota 1: %.2f", dados_aluno.n1);
        printf("\nNota 2: %.2f", dados_aluno.n2);
        printf("\nNota 3: %.2f", dados_aluno.n3);
    } else {
        printf("\nNao foi possivel consultar na posicao especifica");
    }

    x = remove_lista_final(li);
    if(x) {
        printf("\n\nAluno removido com sucesso!");
    } else {
        printf("\nErro, aluno nao removido!");
    }

    x = remove_lista_inicio(li);
    if(x) {

        printf("\nAluno removido com sucesso!");
    } else {
        printf("\nErro, aluno nao removido!");
    }

    x = remove_lista(li, mat);
    if(x) {
        printf("\nAluno removido na posicao especifica com sucesso!");
    } else {
        printf("\nErro, aluno nao removido na posicao especifica!\n");
    }

    libera_lista(li);
}