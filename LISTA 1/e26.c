#include <stdio.h>
#include <stdlib.h>

// Fa�a um programa para ler o hor�rio (hora, minuto e segundo) de in�cio e a dura��o, em segundos, de uma experi�ncia biol�gica.
// O programa deve resultar com o novo hor�rio (hora, minuto e segundo) do termino da mesma.

int main() {
   int hora = 12, min = 05, seg = 01;
   int duracao = 1304, horas, minutos, segundos, horaTermino, minutoTermino, segundoTermino;

   printf("hora inicial da experiencia biologica: %d:%d:%d", hora, min, seg);
   printf("\ntempo da experiencia biologia em seg: %d", duracao);

   horas = duracao / 3600;
   minutos = (duracao-(horas*3600))/60;
   segundos = duracao - (horas*3600)-(minutos*60);

   horaTermino = hora + horas;
   minutoTermino = min + minutos;
   segundoTermino = seg + segundos;

   printf("\ntermino da experiencia biologica: %d:%d:%d", horaTermino, minutoTermino, segundoTermino);

   printf("\n");
   system("pause");
   return 0;
}
