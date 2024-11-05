#include <stdio.h>

// Implementazione delle funzioni

int main() {
	int array[] = {1, 3, 5, 7, 9, 11, 13, 15};
	int n = sizeof(array) / sizeof(array[0]);
	int inquilini = 7;

	int indice = ricerca_binaria(array, 0, n - 1, inquilini);

	if (indice != -1) {
		printf("L'indice della cella che contiene il numero di inquilini è: %d\n", indice);
	} else {
		printf("Numero di inquilini non trovato nell'array.\n");
	}

	return 0;
}

// Implementazione delle funzioni
