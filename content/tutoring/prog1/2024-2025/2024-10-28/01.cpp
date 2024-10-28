#include <iostream>

#define MAX_VALORI 1000

using namespace std;

// Dichiarazioen delle funzioni

int main() {
    int risultati[MAX_VALORI];
    
    // 2. Popola l'array risultati con i primi 1000 valori della funzione sommaCifre
    for (int i = 0; i < MAX_VALORI; i++) {
        risultati[i] = sommaCifre(i);
    }
    
    // Test della funzione verificaCrescente
    int x = 100, y = 109; // intervallo di esempio
    if (verificaCrescente(risultati, x, y) == 0) {
        cout << "I valori tra risultati[" << x << "] e risultati[" << y << "] sono monotonici e crescenti.\n";
    } else {
        cout << "I valori tra risultati[" << x << "] e risultati[" << y << "] non sono monotonici e crescenti.\n";
    }
    
    return 0;
}

// Implementazione delle funzioni
