#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Leia um n�mero inteiro de 4 d�gitos e imprima 1 d�gito por linha

int main() {
   int num1 = 1 , num2 = 0 , num3 = 5 , num4 = 7;

   printf("num int de 4 digitos : %d%d%d%d " , num1, num2, num3, num4);

   printf("\n\num digito por linha:");
   printf("\n%d\n%d\n%d\n%d\n\n", num1, num2, num3, num4);

   system("pause");
   return 0;
}
