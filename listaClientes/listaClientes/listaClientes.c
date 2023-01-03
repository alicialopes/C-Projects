//Arquivo listaLigada.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "listaClientes.h"
#include "funcoesAuxiliares.h"

struct elemento{ //struct que ira guardar os dados dos clientes
    CLIENTE dados; // e também ira guardar o valor do prox elemento alocado
    struct elemento *prox;
};

typedef struct elemento ELEM;

int lista_vazia(Lista *li) { // Verifica se a lista está vazia
    if(li == NULL) {
        return 1;
    }
    if(*li == NULL){
        return 1;
    }

    return 0;
}

Lista *criaLista(){ //Cria a lista e aloca ela dinamicamente.
    Lista *li;
    li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL) {
        *li = NULL;
    }
    return li;
}

Lista *aloca(int n){ //Aloca a lista dinamicamente
    int i;
    Lista *li = (Lista*) malloc(n * sizeof(Lista));
    return li;
}

int insere_lista_ordenada(Lista *li, CLIENTE cli) { // insere a lista ordenandamente
    if(li == NULL) {
        return 0;
    }

    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    if(no == NULL) {
        return 0;
    }

    no->dados = cli;

    if(lista_vazia(li)) {
        no -> prox = (*li);
        *li = no;
        return 1;
    } else {
        ELEM *ant, *atual = *li;
        while(atual != NULL && atual -> dados.codigo < cli.codigo) {
            ant = atual; // posiciona entre os nos
            atual = atual -> prox;
        }
        if(atual == *li) { // insere se estiver na primeira posicao
            no -> prox = (*li);
            *li = no;
        } else { // insere em qualquer outra posicao
            no -> prox = ant -> prox;
            ant -> prox = no;
        }

        return 1;
    }
}

Lista *realoca(Lista *li, int lidos){ //Realoca a lista dinamicamente caso tenha alguma nova informação lida
    li = (Lista*) realloc(li, lidos * sizeof(Lista) + sizeof(Lista));
    return li;
} // não precisa

CLIENTE coleta(){ //Coleta os dados que preencherão os dados da struct
    CLIENTE cli;
    printf("Digite o numero do codigo:\n");
    scanf("%d", &cli.codigo);

    printf("Digite o nome:\n");
    fflush(stdin);
    fgets(cli.nome, 40, stdin);
    cli.nome[strlen(cli.nome) -1] = '\0';
    tolower(cli.nome);

    printf("Digite o nome da empresa:\n");
    fflush(stdin);
    fgets(cli.empresa, 50, stdin);
    cli.empresa[strlen(cli.empresa) -1] = '\0';
    tolower(cli.empresa);

    printf("Digite o departamento:\n");
    fflush(stdin);
    fgets(cli.departamento, 50, stdin);
    cli.departamento[strlen(cli.departamento) -1] = '\0';
    tolower(cli.departamento);

    printf("Digite o telefone:\n");
    fflush(stdin);
    fgets(cli.telefone, 11, stdin);
    cli.telefone[strlen(cli.telefone) -1] = '\0';
    tolower(cli.telefone);

    printf("Digite o celular:\n");
    fflush(stdin);
    fgets(cli.celular, 12, stdin);
    cli.celular[strlen(cli.celular) -1] = '\0';
    tolower(cli.celular);

    printf("Digite o email:\n");
    fflush(stdin);
    fgets(cli.email, 120, stdin);
    cli.email[strlen(cli.email) -1] = '\0';
    tolower(cli.email);
    system("cls");

    return cli;
}

void imprimeDados(Lista *li){ //Imprime os dados armazenados na struct
    int i, qtd = 0;
    FILE *f;
    f = fopen("arquivo.bin", "rb");

    if(f == NULL){
        printf("Erro ao abrir o programa!\n");
        system("pause");
        exit(1);
    }

    while(fread(&li, sizeof(Lista), 1, f)){
        qtd++;
    }

    return qtd;
}

void LiberaDados(Lista *li){ //Libera a memoria
    printf("Liberando memoria...\n\n\n");
    free(li);
}

int salvaDados(Lista *li, int n){ //Salva os itens que foram adicionados na memoria
    int salvos;
    FILE *f = fopen("arquivo.bin", "wb");
    salvos = fwrite(li, sizeof(Lista), n, f);
    fclose(f);
    return salvos;
}

int consulta_lista_mat(Lista *li){ // consulta na lista pela matricula os dados
    int matricula;
    if(li == NULL){
        return 0;
    }
    ELEM *no = *li;
    printf("Por favor, digite o codigo que você quer procurar: ");
    scanf("%d", &matricula);
    while(no != NULL && no->dados.codigo != matricula){
        no = no->prox;
    }
    if(no == NULL){
        return 0;
    }else{
        (*li)->dados.codigo = no->dados.codigo;
        return 1;
    }
}

int consulta_lista_nome(Lista *li){// consulta na lista pelo nome os dados
    char nome[50];
    if(li == NULL){
        return 0;
    }
    ELEM *no = *li;
    printf("Por favor, digite o nome que você quer procurar: ");
    fgets(nome, 50, stdin);
    tolower(nome);
    while(no != NULL && no->dados.nome != nome){
        no = no->prox;
    }

    printf("Cadastro numero %d", no->dados.codigo);
    printf("Nome: %s", no->dados.nome);
    printf("Nome da empresa: %s", no->dados.empresa);
    printf("Departamento: %s", no->dados.departamento);
    printf("Telefone: %s", no->dados.telefone);
    printf("Celular: %s", no->dados.celular);
    printf("E-mail: %s", no->dados.email);
    printf("***************************\n\n");

    /*if(no == NULL){
        return 0;
    }else{
        (*li)->dados.nome = no->dados.nome;
        return 1;
    }*/
}


void apagaLista(Lista *li){ // apaga a lista e o no, tudo é limpo
    if(li != NULL){
        ELEM *no;
        while((*li) != NULL){
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}


