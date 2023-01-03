#include <stdio.h>
#include <stdlib.h>
#include "minhalib.h"

void func_it(int n) {
    n++;
    do {
        n--;
        printf("\n%d", n);
    } while(n);
}

int func_rec(int n) {
    printf("\n%d", n);
    if (n == 0) {
        return 0;
    }
    return(func_rec(n-1));
}

