#include <stdio.h>
#include <stdlib.h>

int main() {

    // Leia o valor do raio de um círculo e calcule a área do círculo correspondente. Imprima o
    // resultado dessa operação. A área do círculo é 𝜋 ∗ 𝑟𝑎𝑖𝑜², considere 𝜋 = 3,141592 */

    int raio = 8;

    printf("raio do circulo: %d\n\n" , raio);
    printf("area do circulo: %.2f\n\n" , 3.14 * raio * raio);

    system("pause");
    return 0;
}
