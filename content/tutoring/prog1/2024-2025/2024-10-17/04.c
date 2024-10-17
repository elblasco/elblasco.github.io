#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 1000

// Definizione delle funzioni

int main() {
    int n = 5, m = 5; // Dimensioni del labirinto
	
    int labirinto_risolvibile[MAX_SIZE][MAX_SIZE] = {
        {0, 1, 0, 0, 0},
        {0, 1, 0, 1, 0},
        {0, 0, 0, 1, 0},
        {1, 1, 0, 0, 0},
        {0, 0, 0, 1, 0}
    };

	int labirinto_non_risolvibile[MAX_SIZE][MAX_SIZE] = {
        {0, 0, 0, 0, 0},
        {0, 1, 0, 1, 0},
        {0, 0, 0, 1, 0},
        {1, 1, 0, 0, 1},
        {0, 0, 0, 1, 0}
    };
    
    // Matrice per tracciare le celle visitate
    bool visitati[MAX_SIZE][MAX_SIZE] = { {false} };
	bool visitati2[MAX_SIZE][MAX_SIZE] = { {false} };
    
    if (risolvibile(labirinto_risolvibile, visitati, n, m, 0, 0)) {
        printf("Esiste un percorso per uscire dal labirinto risolvibile.\n");
    } else {
        printf("Non esiste un percorso per uscire dal labirinto risolvibile.\n");
    }
	
    if (risolvibile(labirinto_non_risolvibile, visitati2, n, m, 0, 0)) {
        printf("Esiste un percorso per uscire dal labirinto non risolvibile.\n");
    } else {
        printf("Non esiste un percorso per uscire dal labirinto non risolvibile.\n");
    }
    
    return 0;
}

// Implemenetazione delle funzioni
