//Arquivo main.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaClientes.h"
#include "funcoesAuxiliares.h"

int main()
{
    Lista *li; //ponteiro para ponteiro que está no arquivo listaLigada.h
    int x;
    li = criaLista();

    leDados(li);

    CLIENTE cli;

    printf("**** Bem vindos ao nosso menu ****");
    pula2Linhas;

    while(1) {
        int options;
        menu();
        options = resp_menu();

        switch(options){
        case 1 :
            apagaTela;
            printf("\nVoce escolheu a opcao 1 -> Insercao de novo contato!");
            pula2Linhas;
            x = insere_lista_ordenada(li, coleta());
            if(x){
                aloca(1);
                printf("\n\n");
            } else {
                printf("ERRO!\n");
            }
            pausaTela;
            apagaTela;
            break;
        case 2 :
            apagaTela;
            printf("\nVoce escolheu a opcao 2 -> Geracao de relatorio Total!");
            pula2Linhas;
            imprimeDados(li);
            pausaTela;
            apagaTela;
            break;
        case 3 :
            apagaTela;
            printf("\nVoce escolheu a opcao 3 -> Geracao de relatorio Individual!");
            pula2Linhas;
            consulta_lista_codigo(li, &cli);
            pula1Linha;
            pausaTela;
            apagaTela;
            break;
        case 4 :
            apagaTela;
            printf("\nVoce escolheu a opcao 4 -> Geracao de relatorio Por nome!");
            pula2Linhas;
            consulta_lista_nome(li, &cli);
            pausaTela;
            apagaTela;
            break;
        case 5 :
            apagaTela;
            printf("\nVoce escolheu a opcao 5 -> Edicao de dados do contato!");
            pula2Linhas;
            x = insere_lista_ordenada(li, edita_Dados(li));
            if(x){
                aloca(1);
                printf("\n\n");
            } else {
                printf("ERRO!\n");
            }
            pausaTela;
            apagaTela;
            break;
        case 6 :
            apagaTela;
            printf("\nVoce escolheu a opcao 6 -> Remocao de contato!");
            pula2Linhas;
            remove_lista(li, &cli);
            pula1Linha;
            pausaTela;
            apagaTela;
            break;
        case 7 :
            apagaTela;
            printf("\nVoce escolheu a opcao 7 -> Sair do programa!\n");
            pula2Linhas;
            salvaDados(li);
            apagaLista(li);
            pausaTela;
            return 0;
            break;
        default:
            apagaTela;
            printf("ERRO!!!!! \nNao existe essa opcao, coloque de 1 a 7!");
            pula2Linhas;
            break;
        }
    }
}


