#include <stdio.h>
#include <stdlib.h>
#include "atv3.h"

struct calculo{
    float num1;
    float num2;
};

somar(calculo *num1, calculo *num2, float *result) {
    *result = num1 + num2;
    return(&result);
}

subtrair(calculo *num1, calculo *num2, float *result) {
    *result = num1 - num2;
    return(&result);
}

multiplicar(calculo *num1, calculo *num2, float *result) {
    *result = num1 * num2;
    return(&result);
}

dividir(calculo *num1, calculo *num2, float *result) {
    *result = num1 / num2;
    return(&result);
}
