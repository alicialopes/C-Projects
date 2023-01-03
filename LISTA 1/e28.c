#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a
segunda prova têm peso 1 e a terceira tem peso 2. Antes de o usuário entrar com as notas do
aluno ele deve entrar com o número de matricula do aluno. Ao final, mostrar a matricula do
aluno juntamente com a sua média e indicar se o aluno foi aprovado ou reprovado. A nota
para aprovação deve ser igual ou superior a 60 pontos.*/


int main() {
    int matricula;
    float nota1, nota2, nota3, media;

    printf("digite a matricula do aluno: ");
    scanf("%d", &matricula);

    printf("digite a nota 1: ");
    scanf("%f", &nota1);

    printf("digite a nota 2: ");
    scanf("%f", &nota1);

    printf("digite a nota 3: ");
    scanf("%f", &nota1);

    media = nota1 + nota2 + (nota3*2)/4;

    if(media >= 60){
        printf("\no aluno de matricula %d foi APROVADO com a media de %.2f", matricula, media);
    } else {
        printf("\no aluno de matricula %d foi REPROVADO com a media de %.2f", matricula, media);
    }

}
