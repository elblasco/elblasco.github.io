#include <stdio.h>

// Dichiarazione delle funzioni

int main() {
	int vettore[] = {1, 2, 3, 4, 5};
	int n = 5;

	// Scambia l'array
	scambia_array(vettore, 0, n - 1);

	// Stampa l'array scambiato
	printf("Array scambiato: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", vettore[i]);
	}
	printf("\n");

	return 0;
}

// Implementazione delle funzioni
