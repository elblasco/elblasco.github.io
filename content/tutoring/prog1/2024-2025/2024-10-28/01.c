#include <stdio.h>

#define MAX_VALORI 1000

// Dichiarazione delle funzioni

int main() {
    int risultati[MAX_VALORI];
    
    // 2. Popola l'array risultati con i primi 1000 valori della funzione sommaCifre
    for (int i = 0; i < MAX_VALORI; i++) {
        risultati[i] = somma_cifre(i);
    }
    
    // Test della funzione verificaCrescente
    int x = 100, y = 109;
    if (verifica_crescente(risultati, x, y) == 0) {
        printf("I valori tra risultati[%d] e risultati[%d] sono monotonici e crescenti.\n", x, y);
    } else {
        printf("I valori tra risultati[%d] e risultati[%d] non sono monotonici e crescenti.\n", x, y);
    }   
    return 0;
}

// Implementazione delle funzioni
