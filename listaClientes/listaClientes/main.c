//Arquivo main.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaClientes.h"
#include "funcoesAuxiliares.h"

int main()
{
    Lista *li, c; //ponteiro para ponteiro que está no arquivo listaLigada.h
    int lidos = 0, n = 0, new_qtd, i, options, x;
    li = criaLista();
    FILE *f;
    f = fopen("arquivo.bin", "rb");

    CLIENTE cli;

    printf("**** Bem vindos ao nosso menu ****\n\n");

    while(1) {
        int options;
        menu();
        options = resp_menu();

        switch(options){
        case 1 :
            x = insere_lista_ordenada(li, cli);
            if(x){
                printf("\nVoce escolheu a opcao 1 -> Insercao de novo contato!\n");
                //insere_lista_ordenada();
                aloca(1);
                coleta();
            } else {
                printf("ERRO!\n");
            }
            break;
        case 2 :
            printf("\nVoce escolheu a opcao 2 -> Geracao de relatorio Total!\n");
            int i = imprimeDados(li);

            for(i = 0; i < n; i++) {
                printf("Cadastro numero %d", li[i]->dados.codigo);
                printf("Nome: %s", li[i]->dados.nome);
                printf("Nome da empresa: %s", li[i]->dados.empresa);
                printf("Departamento: %s", li[i]->dados.departamento);
                printf("Telefone: %s", li[i]->dados.telefone);
                printf("Celular: %s", li[i]->dados.celular);
                printf("E-mail: %s", li[i]->dados.email);

                printf("***************************\n\n");
            }

            imprimeDados(li, lidos + new_qtd);
            break;
        case 3 :
            printf("\nVoce escolheu a opcao 3 -> Geracao de relatorio Individual!\n");
            consulta_lista_mat(li);
            break;
        case 4 :
            printf("\nVoce escolheu a opcao 4 -> Geracao de relatorio Por nome!\n");
            consulta_lista_nome(li);
            break;
        case 5 :
            printf("\nVoce escolheu a opcao 5 -> Edicao de dados do contato!\n");
            break;
        case 6 :
            printf("\nVoce escolheu a opcao 6 -> Remocao de contato!\n");
            break;
        case 7 :
            printf("\nVoce escolheu a opcao 7 -> Sair do programa!\n");
            printf("Foram salvos %d elementos no arquivo...\n\n\n", salvaDados(li, lidos + new_qtd));
            apagaLista(li);
            system("pause");
            exit(1);
            break;
        default:
            printf("Nao existe essa opcao, coloque de 1 à 7!\n");
            break;
        }
    }

    if(f == NULL){
        printf("Informe a quantidade de elementos para Cadastro:\n");
        scanf("%d", &new_qtd);
        li = aloca(new_qtd);
    }else{
        li = aloca(1);
        printf("Arquivo de dados encontrado, efetuando leitura...");
        while(!feof(f)){
            n = fread(&c, sizeof(Lista), 1, f);
            if(n == 1){
                lidos++;
                li = realoca(li, lidos);
                li[lidos - 1] = c;
            }
        }
        fclose(f);

        printf("\nForam lidos %d registros no arquivo de dados\n", lidos);
        printf("Informe quantos elementos serao inseridos alem dos que ja foram inseridos: ");
        scanf("%d", &new_qtd);
        li = realoca(li, lidos + new_qtd);
        system("cls");
    }
}


