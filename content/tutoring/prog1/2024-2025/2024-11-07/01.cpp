#include <iostream>

#define N 3
#define M 3

using namespace std;

// Dichiarazione delle funzioni

int main() {
	int n = N, m = M;
	
	// Esempio di input: una matrice di 3x3 con valori esadecimali RGB
	unsigned long int input[N][M] = {
		{16711680, 65280, 255},
		{16776960, 16711935, 65535},
		{16777215, 0, 8947848}
	};
	
	unsigned long int output[N][M];
	
	// Applica il box blur
	box_blur(input, output, n, m);
	
	// Stampa l'output
	cout << "Immagine con filtro box blur applicato:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << output[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}

// Implementazione delle funzioni
