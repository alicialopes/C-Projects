#include <stdio.h>
#include <stdlib.h>

//Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume deum cilindro circular
// é calculado por m: V = 𝜋 ∗ 𝑟𝑎𝑖𝑜2∗ 𝑎𝑙𝑡𝑢𝑟𝑎, onde𝜋 = 3,141592 .*/

int main() {
    int alt = 10;
    int raio = 5;

    printf("altura do cilindro e: %d\n", alt);
    printf("raio do cilindro e: %d\n", raio);

    float vol = 3.14 * (raio * raio) * alt;

    printf("o volume do cilindro e: %.2f\n\n" , vol);

    system("pause");
    return 0;
}
