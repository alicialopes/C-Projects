#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("digite um numero: ");
    scanf("%d", &num);

    if(num == 1) {
        printf("A");
    } else if (num == 2){
        printf("B");
    } else if (num == 3) {
        printf("C");
    } else if (num == 4) {
        printf("D");
    } else {
        printf("0");
    }

    printf("\n\n");
    system("pause");
    return 0;
}


