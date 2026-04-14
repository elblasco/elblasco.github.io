#include <iostream>

using namespace std;

// Dichiarazione delle funzioni

int main() {
	int vettore[] = {1, 2, 3, 4, 5};
	int n = sizeof(vettore) / sizeof(vettore[0]);

	// Scambia l'array
	scambia_array(vettore, 0, n - 1);

	// Stampa l'array scambiato
	cout << "Array scambiato: ";
	for (int i = 0; i < n; i++) {
		cout << vettore[i] << " ";
	}
	cout << endl;

	return 0;
}

// Implementazione delle funzioni
