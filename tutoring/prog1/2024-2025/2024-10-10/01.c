#include <stdio.h>

// Dichiarazione delle funzioni

int main() {
    int x, y;

	printf("Inserire x: ");
	scanf("%d", &x);
	printf("Inserire y: ");
	scanf("%d", &y);
	
    printf("Prima dello scambio: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("Dopo lo scambio: x = %d, y = %d\n", x, y);

    return 0;
}

// Implementazione delle funzioni
