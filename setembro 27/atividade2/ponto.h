// arquivo ponto.h

// atribui novo nome para struct ponto: Ponto
typedef struct ponto Ponto;

// cria um novo ponto - somento ponteiro
Ponto *pto_cria(float x, float y);

// libera um ponto
void pto_libera(Ponto *p);

// acessa valores "x" e "y" de um ponto
void pto_acessa(Ponto *p, float *x, float *y);

// atribui os valores "x" e "y" a um ponto
void pto_atribui(Ponto *p, float x, float y);

// calcula a distancia entre dois pontos
float pto_distancia(Ponto *p1, Ponto *p2);
