#include <iostream>

#define N 5 // Dimensione del tabellone (righe)
#define M 5 // Dimensione del tabellone (colonne)

using namespace std;

// Dichiarazione delle funzioni

void stampa_tabelone(int tabellone[N][M], int righe, int colonne);
int conta_celle_vive(int tabellone[N][M], int riga, int colonna, int righe, int colonne);
void aggiorna_tabellone(int tabellone[N][M], int righe, int colonne);
int finito(int tabellone[N][M], int righe, int colonne);

int main() {

	int righe = N;
	int colonne = M;
	
    int tabellone[N][M] = {
        {0, 1, 0, 0, 0},
        {1, 1, 1, 0, 0},
        {0, 0, 0, 1, 0},
        {0, 0, 1, 1, 1},
        {0, 0, 0, 0, 0}
    };

	stampa_tabelone(tabellone, righe, colonne);
	
    while(finito(tabellone, righe, colonne) != 0){
		aggiorna_tabellone(tabellone, righe, colonne);
		stampa_tabelone(tabellone, righe, colonne);
	}

    return 0;
}

// Implementazione delle funzioni
