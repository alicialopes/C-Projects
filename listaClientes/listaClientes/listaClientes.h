
//Arquivo listaLigada.h
typedef struct cliente{
    int codigo;
    char nome[40];
    char empresa[50];
    char departamento[50];
    char telefone[11];
    char celular[12];
    char email[120];
} CLIENTE;

typedef struct elemento *Lista;

int lista_vazia(Lista *li);

Lista *criaLista();

Lista *aloca(int n);

Lista *realoca(Lista *li, int n);

CLIENTE coleta();

void imprimeDados(Lista *li);

void LiberaDados(Lista *li);

int consulta_lista_nome(Lista *li);

int consulta_lista_mat(Lista *li);

int salvaDados(Lista *li, int n);

void apagaLista(Lista *li);

//int insere_lista_ordenada(Lista *li);
