// Arquivo filaD.h

typedef struct aluno {
    int matricula;
    float n1, n2, n3;
} ALUNO;

typedef struct fila Fila;

Fila *cria_fila();

void destroi_fila(fi);

int tamanho_fila(Fila *fi);

int fila_cheia(Fila *fi);

int fila_vazia(Fila *fi);

int insere_fila(Fila *fi, ALUNO al);

int remove_fila(Fila *fi);

int consulta_fila(Fila *fi, ALUNO *al);
