#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Fa�a um programa para ler um n�mero inteiro, positivo de tr�s d�gitos, e gerar outron�mero formado pelos d�gitos invertidos do n�mero lido

int main() {
   int num, num1, num2, num3;

   printf("digite um numero inteiro de tres digitos: ");
   scanf("%d", &num);

   if (num > 10) {
     num1 = num%10;
	   num = num/10;
	   num2 = num%10;
	   num = num/10;
	   num3=num%10;
	   num=num/10;
   }

   printf("numero invertido: %d%d%d\n\n", num1, num2, num3);

   system("pause");
   return 0;
}
