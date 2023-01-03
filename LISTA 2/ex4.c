#include <stdio.h>
#include <stdlib.h>

int potencia(int x, int y) {
	if (y == 1){
        return x;
	} else {
        return (x * potencia(x, y - 1));
	}
}

int main() {
	int x, y;

	printf("\ndigite o valor x: ");
	scanf("%d", &x);

	printf("\ndigite o valor y: ");
	scanf("%d", &y);

	printf("\n%d elevado a %d = %d.\n\n", x, y, potencia(x, y));

	return 0;
}
