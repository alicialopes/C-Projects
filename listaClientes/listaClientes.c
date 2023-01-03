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
    Lista *li = (Lista*) malloc(n * sizeof(Lista));
    return li;
}

int insere_lista_ordenada(Lista *li, CLIENTE cli) { // insere a lista ordenandamente
    if(li == NULL) {
        return 0;
    }

    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    if(no == NULL) {
        printf("a");
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

CLIENTE coleta(){ //Coleta os dados que preencherão os dados da struct
    CLIENTE cli;
    printf("Digite o numero do codigo:\n");
    scanf("%d", &cli.codigo);

    printf("Digite o nome:\n");
    fflush(stdin);
    fgets(cli.nome, 40, stdin);
    cli.nome[strlen(cli.nome) -1] = '\0';//Tira o espaço'\0' da variavel que guardará o nome
    strupr(cli.nome);//Deixa os valores da string em maiúsculas.

    printf("Digite o nome da empresa:\n");
    fflush(stdin);
    fgets(cli.empresa, 50, stdin);
    cli.empresa[strlen(cli.empresa) -1] = '\0';
    strupr(cli.empresa);

    printf("Digite o departamento:\n");
    fflush(stdin);
    fgets(cli.departamento, 50, stdin);
    cli.departamento[strlen(cli.departamento) -1] = '\0';
    strupr(cli.departamento);

    printf("Digite o telefone:\n");
    fflush(stdin);
    fgets(cli.telefone, 11, stdin);
    cli.telefone[strlen(cli.telefone) -1] = '\0';
    strupr(cli.telefone);

    printf("Digite o celular:\n");
    fflush(stdin);
    fgets(cli.celular, 12, stdin);
    cli.celular[strlen(cli.celular) -1] = '\0';
    strupr(cli.celular);

    printf("Digite o email:\n");
    fflush(stdin);
    fgets(cli.email, 120, stdin);
    cli.email[strlen(cli.email) -1] = '\0';
    strupr(cli.email);
    pula2Linhas;
    decoracao;
    pula1Linha;
    printf("CLIENTE COLETADO:");
    pula2Linhas;
    printf("Cadastro numero: ..%d\n", cli.codigo);//Print dos valores Digitados
    printf("Nome: .............%s\n", cli.nome);
    printf("Nome da empresa: ..%s\n", cli.empresa);
    printf("Departamento: .....%s\n", cli.departamento);
    printf("Telefone: .........%s\n", cli.telefone);
    printf("Celular: ..........%s\n", cli.celular);
    printf("E-mail: ...........%s\n", cli.email);
    decoracao;

    return cli; //Retorna o cliente criado
}

int leDados(Lista *li){ //Le os dados armazenados no arquivo binário
    int qtd = 0;
    FILE *f;
    f = fopen("arquivo.bin", "rb");//Abre o arquivo em modo leitura de binário
    CLIENTE cli;

    if(f == NULL){
        printf("Gerando arquivo de registro de dados!\n");
        system("pause");
    }

    while(fread(&cli, sizeof(CLIENTE), 1, f)){
        qtd++;
        insere_lista_ordenada(li, cli);
    }

    return qtd;
}

void LiberaDados(Lista *li){ //Libera a memoria
    printf("Liberando memoria...\n\n\n");
    free(li);
}

int salvaDados(Lista *li){ //Salva os itens que foram adicionados na struct Lista
    int salvos;
    ELEM *no = *li;
    FILE *f = fopen("arquivo.bin", "wb");
    //salvos = fwrite(li, sizeof(Lista), n, f);
    while (no != NULL){
        salvos += fwrite(&no->dados, sizeof(CLIENTE), 1, f);
        no = no->prox;
    }

    fclose(f);
    return salvos;
}

void imprimeDados(Lista *li){ //imprime todos os dados
    if(li == NULL){
        printf("Erro ao imprimir os dados");
    }

    ELEM *no = *li;

    if(no == NULL){
        printf("Erro ao imprimir os dados");
    }

    while(no != NULL){
        printf("\nCadastro numero: ..%d\n", no->dados.codigo);
        printf("Nome: .............%s\n", no->dados.nome);
        printf("Nome da empresa: ..%s\n", no->dados.empresa);
        printf("Departamento: .....%s\n", no->dados.departamento);
        printf("Telefone: .........%s\n", no->dados.telefone);
        printf("Celular: ..........%s\n", no->dados.celular);
        printf("E-mail: ...........%s\n", no->dados.email);
        pula2Linhas;
        decoracao;
        pula2Linhas;

        no = no->prox;
    }

}

int consulta_lista_codigo(Lista *li, CLIENTE *cli){ // consulta na lista pelo codigo os dados
    int codigoDesejado;
    if(li == NULL){
        return 0;
    }

    ELEM *no = *li;
    printf("Por favor, digite o codigo que voce quer procurar: ");
    scanf("%d", &codigoDesejado);

    while(no != NULL && no->dados.codigo != codigoDesejado){
        no = no->prox;
    }

    if(no == NULL){
        return 0;
    }else{
        *cli = no->dados;
        pula1Linha;
        decoracao;
        pula1Linha;
        printf("CLIENTE SOLICITADO:");
        pula2Linhas;
        printf("Cadastro numero: ..%d\n", no->dados.codigo);
        printf("Nome: .............%s\n", no->dados.nome);
        printf("Nome da empresa: ..%s\n", no->dados.empresa);
        printf("Departamento: .....%s\n", no->dados.departamento);
        printf("Telefone: .........%s\n", no->dados.telefone);
        printf("Celular: ..........%s\n", no->dados.celular);
        printf("E-mail: ...........%s\n", no->dados.email);
        decoracao;
        pula1Linha;
        return 1;
    }
}

int consulta_lista_nome(Lista *li, CLIENTE *cli){// consulta na lista pelo nome os dados
    char nomeDesejado[50];
    int x;
    if(li == NULL){
        return 0;
    }

    ELEM *no = *li;
    printf("Por favor, digite o nome que voce quer procurar: ");
    fflush(stdin);
    fgets(nomeDesejado, 50, stdin);
    nomeDesejado[strlen(nomeDesejado) -1] = '\0';
    strupr(nomeDesejado);

    while(no != NULL){
        x = strcmp(no->dados.nome, nomeDesejado);//Compara se o valor no argumento 1 é igual ao valor do argumento 2, se for igual retorna 0
        if(x == 0){                             // O valor precisa ser exatamente igual, ou seja, o nome deve ser identico, inclusive se houver sobrenome.
            pula1Linha;
            decoracao;
            pula1Linha;
            printf("CLIENTE SOLICITADO:");
            pula2Linhas;
            printf("Cadastro numero: ..%d\n", no->dados.codigo);//Ou seja, na busca é necessário buscar com nome e sobrenome.
            printf("Nome: .............%s\n", no->dados.nome);
            printf("Nome da empresa: ..%s\n", no->dados.empresa);
            printf("Departamento: .....%s\n", no->dados.departamento);
            printf("Telefone: .........%s\n", no->dados.telefone);
            printf("Celular: ..........%s\n", no->dados.celular);
            printf("E-mail: ...........%s\n", no->dados.email);
            decoracao;
            pula2Linhas;
        }
        no = no->prox;
    }

    if(no == NULL){
        return 0;
    }else{
        *cli = no->dados;
        return 1;
    }
}

int remove_lista(Lista *li, CLIENTE *cli){ //Remove da lista o cliente
    int codigoDesejado, answer;
    if(li == NULL){
        return 0;
    }

    ELEM *ant, *no = *li;
    printf("Por favor, digite o codigo que voce quer excluir: ");
    scanf("%d", &codigoDesejado);

    while(no != NULL && no->dados.codigo != codigoDesejado){
        ant = no;
        no = no->prox;
    }

    if(no == NULL){
        return 0;
    } else {
        *cli = no->dados;
        pula1Linha;
        decoracao;
        printf("\nCadastro numero: ..%d\n", no->dados.codigo);
        printf("Nome: .............%s\n", no->dados.nome);
        printf("Nome da empresa: ..%s\n", no->dados.empresa);
        printf("Departamento: .....%s\n", no->dados.departamento);
        printf("Telefone: .........%s\n", no->dados.telefone);
        printf("Celular: ..........%s\n", no->dados.celular);
        printf("E-mail: ...........%s\n", no->dados.email);
        decoracao;
        pula2Linhas;
    }

    while(1){
        printf("Voce deseja mesmo deletar o cliente? 1 = Sim --/-- 0 = Nao\n");
        scanf("%d", &answer);
            switch(answer) {
                case 1 :
                    if(no == *li){
                        *li = no->prox;
                    }else{
                        ant->prox = no->prox;
                    }

                    free(no);
                    return 1;
                break;

                case 0 :
                    system("pause");
                    return 0;
                    break;

                default :
                    printf("\nPor favor, digite os numeros 1 para Sim ou 0 para Nao\n");
                    break;
            }
    }


    return 1;
}

CLIENTE edita_Dados(Lista *li){//Edita os dados do cliente.
    int codigoDesejado;

    ELEM *ant, *no = *li;
    CLIENTE cliAux, cli;

    printf("Por favor, digite o codigo que voce quer editar: ");
    scanf("%d", &codigoDesejado);

    while(no != NULL && no->dados.codigo != codigoDesejado){
        no = no->prox;
    }

    if(no == NULL){
        printf("\nERRO!\n");
    }else{
        cli = no->dados;
        pula1Linha;
        decoracao;
        pula1Linha;
        printf("Cadastro numero: ..%d\n", no->dados.codigo);
        printf("Nome: .............%s\n", no->dados.nome);
        printf("Nome da empresa: ..%s\n", no->dados.empresa);
        printf("Departamento: .....%s\n", no->dados.departamento);
        printf("Telefone: .........%s\n", no->dados.telefone);
        printf("Celular: ..........%s\n", no->dados.celular);
        printf("E-mail: ...........%s\n", no->dados.email);
        decoracao;
        pula1Linha;
    }

    printf("\nPor favor, digite os novos valores.\n");

    printf("Digite o nome:\n");
    fflush(stdin);
    fgets(cliAux.nome, 40, stdin);
    cliAux.nome[strlen(cliAux.nome) -1] = '\0';
    strupr(cliAux.nome);

    printf("Digite o nome da empresa:\n");
    fflush(stdin);
    fgets(cliAux.empresa, 50, stdin);
    cliAux.empresa[strlen(cliAux.empresa) -1] = '\0';
    strupr(cliAux.empresa);

    printf("Digite o departamento:\n");
    fflush(stdin);
    fgets(cliAux.departamento, 50, stdin);
    cliAux.departamento[strlen(cliAux.departamento) -1] = '\0';
    strupr(cliAux.departamento);

    printf("Digite o telefone:\n");
    fflush(stdin);
    fgets(cliAux.telefone, 11, stdin);
    cliAux.telefone[strlen(cliAux.telefone) -1] = '\0';
    strupr(cliAux.telefone);

    printf("Digite o celular:\n");
    fflush(stdin);
    fgets(cliAux.celular, 12, stdin);
    cliAux.celular[strlen(cliAux.celular) -1] = '\0';
    strupr(cliAux.celular);

    printf("Digite o email:\n");
    fflush(stdin);
    fgets(cliAux.email, 120, stdin);
    cliAux.email[strlen(cliAux.email) -1] = '\0';
    strupr(cliAux.email);


    cliAux.codigo = no->dados.codigo;
    cli.codigo = cliAux.codigo;
    strcpy(cli.nome, cliAux.nome);
    strcpy(cli.empresa, cliAux.empresa);
    strcpy(cli.departamento, cliAux.departamento);
    strcpy(cli.telefone, cliAux.telefone);
    strcpy(cli.celular, cliAux.celular);
    strcpy(cli.email, cliAux.email);

    if(no == *li){
        *li = no->prox;
    }else{
        ant->prox = no->prox;
    }

    free(no);

    return cli;
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


