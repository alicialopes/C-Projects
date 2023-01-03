#include <stdio.h>
#include <stdlib.h>

/*   Ler um valor de massa em libras e apresentá-lo convertido em quilogramas. A fórmula de
conversão é: 𝐾 = 𝐿 ∗ 0,45 , sendo 𝐾 a massa em quilogramas e 𝐿 a massa em libras.  */

int main() {
    float k, l;

    printf("Digite massa em libras: ");
    scanf("%f", &l);

    k = l * 0.45;
    printf("\nO valor convertido em kg: %.2fkg", k);
    return 0;
}
