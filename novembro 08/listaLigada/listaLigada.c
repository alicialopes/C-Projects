// Arquivo listaLigada.c
#include <stdio.h>
#include <stdlib.h>
#include "listaLigada.h"

struct elemento {
    ALUNO dados;
    struct elemento *prox;
};

typedef struct elemento ELEM;

Lista *criaLista() {
    Lista *li;
    li = (Lista*) malloc(sizeof(Lista));

    if(li != NULL) {
        *li = NULL;
    }
    return li;
}

void apagaLista(Lista *li) {
    if(li != NULL) {
        ELEM *no;
        while((*li) != NULL) {
            no = *li;
            *li = (*li) -> prox;
            free(no);
        }
        free(li);
    }
}

int tamLista(Lista *li) {
    if(li == NULL) {
        return 0;
    }

    int acum = 0;
    ELEM *no = *li;

    while(no != NULL) {
        acum++;
        no = no -> prox;
    }
    return acum;
}

int listaCheia(Lista *li) {
    return 0;
}

int listaVazia(Lista *li) {
    if(li == NULL) {
        return 1;
    }

    if(*li == NULL) {
        return 1;
    }

    return 0;
}

int insere_inicio_lista(Lista *li, ALUNO al) {
    if(li == NULL) {
        return 0;
    }

    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    if(no == NULL) {
        return 0;
    }

    no -> dados = al;
    no -> prox = (*li);
    *li = no;
    return 1;
}

int insere_final_lista(Lista *li, ALUNO al) {
    if(li == NULL) {
        return 0;
    }

    ELEM *no = (ELEM*) malloc(sizeof(ELEM));

    if(no == NULL) {
        return 0;
    }

    no -> dados = al;
    no -> prox = NULL;

    if((*li) == NULL) {
        *li = no;
    } else {
        ELEM *aux = *li;
        while(aux -> prox != NULL) {
            aux = aux -> prox;
        }
        aux -> prox = no;
    }

    return 1;
}

int insere_lista_ordenada(Lista *li, ALUNO al) {
    if(li == NULL) {
        return 0;
    }

    ELEM *no = (ELEM*) malloc(sizeof(ELEM));

    if(no == NULL) {
        return 0;
    }

    no -> dados = al;
    if(listaVazia(li)) { // insere no inicio
        no -> prox = (*li);
        *li = no;
        return 1;
    } else {
        ELEM *ant, *atual = *li;

        while(atual != NULL && atual -> dados.matricula < al.matricula) {
            ant = atual; // posiciona entre os nós
            atual = atual->prox;
        }
        if(atual == *li) { // insere se estiver na primeira posicao
            no -> prox = (*li);
            *li = no;
        } else{ // insere em qualquer outra posicao
            no -> prox = ant -> prox;
            ant -> prox = no;
        }

        return 1;
    }
}

int remove_inicio_lista(Lista *li) {
    if(li == NULL) { // verifica se a lista existe
        return 0;
    }

    if(*li == NULL) { // verifica se a lista esta vazia
        return 0;
    }

    ELEM *no = *li;
    *li = no -> prox;
    free(no);
    return 1;
}

int remove_final_lista(Lista *li) {
    if(li == NULL) { // verifica se a lista existe
        return 0;
    }

    if((*li) == NULL) { // verifica se a lista esta vazia
        return 0;
    }

    ELEM *ant, *no = *li;
    while(no -> prox != NULL) {
        ant = no;
        no = no -> prox;
    }
    if(no == (*li)) { // remove o primeiro?
        *li = no -> prox; // o proximo é NULL
    } else {
        ant -> prox = no -> prox; // no anterior vai apontar para onde no->prox aponta
    }

    free(no);
    return 1;
}

int remove_lista(Lista *li, int mat) {
    if(li == NULL) {
        return 0;
    }

    ELEM *ant, *no = *li;

    while(no != NULL && no -> dados.matricula != mat) {
        ant = no;
        no = no -> prox;
    }
    if(no == NULL) { // a lista estava vazia ou percorreu-a toda e nao encontrou o elemento
        return 0;
    }
    if(no == *li) { // remover o primeiro?
        *li = no -> prox;
    } else {
        ant -> prox = no -> prox; // ant vai apontar para elemento seguinte ao nó
    }

    free(no);
    return 1;
}

int consulta_lista_pos(Lista *li, int posicao, ALUNO *al) {
    if(li == NULL || posicao <= 0) {
        return 0;
    }

    ELEM *no = *li;
    int i = 1;

    while(no != NULL && i < posicao) { // percorre a lista
        no = no -> prox;
        i++;
    }
    if(no == NULL) { // trata se lista vazia ou nao encontrou elemento
        return 0;
    } else {
        *al = no -> dados;
        return 1;
    }
}

int consulta_lista_mat(Lista *li, int matricula, ALUNO *al) {
    if(li == NULL) {
        return 0;
    }

    ELEM *no = *li;

    while(no != NULL && no -> dados.matricula != matricula) {
        no = no -> prox;
    }
    if (no == NULL) {
        return 0;
    } else {
        *al = no -> dados;
        return 1;
    }
}


