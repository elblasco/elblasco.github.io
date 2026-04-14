#include <iostream>

using namespace std;

// Dichiarazione delle funzioni

int main() {
	int array[] = {1, 3, 5, 7, 9, 11, 13, 15};
	int n = 8;
	int inquilini = 7;

	int indice = ricerca_binaria(array, 0, n - 1, inquilini);

	if (indice != -1) {
		cout << "L'indice della cella che contiene il numero di inquilini è: " << indice << endl;
	} else {
		cout << "Numero di inquilini non trovato nell'array." << endl;
	}

	return 0;
}

// Implementazione delle funzioni
