#include <iostream>

#define MAX_SIZE 1000

using namespace std;

// Definizione delle funzioni

int main() {
	int n = 9;
    char input[] = "a1Zb2Yc3X";

    char output[MAX_SIZE + 1];  // Array di output per il risultato cifrato e invertito
    output[n] = '\0';    // Assicura che la stringa sia terminata con '\0'

    /*...*/

    cout << "Input: " << input << endl;
    cout << "Output cifrato e invertito: " << output << endl;

    return 0;
}

// Implemenetazione delle funzioni

// Funzione per cifrare un singolo carattere
char cifra(char c) {
    if (c >= '0' && c <= '9') {
        // Cifra numerica: inverte 0-9
        return '9' - (c - '0');
    } else if (c >= 'a' && c <= 'z') {
        // Lettera minuscola: la converte nella maiuscola opposta
        return 'Z' - (c - 'a');
    } else if (c >= 'A' && c <= 'Z') {
        // Lettera maiuscola: la converte nella minuscola opposta
        return 'z' - (c - 'A');
    }
    // Non bisogna invertire il carattere
    return c;
}

// Funzione ricorsiva per cifrare e invertire l'array
void Not_AES(char input[], char output[], int start, int end) {
	// Caso base: abbiamo finito di processare tutti gli elementi
	if (start < 0) {
        return;
    }
	// Caso ricorsivo: cifra il carattere corrente e lo salva in posizione
	// invertita, ora rimane da fare il sotto array input[start-1...end]
	else{
    
		// Cifra il carattere corrente e lo salva nell'array di output in
		// posizione inversa
		output[end - start - 1] = cifra(input[start]);
		Not_AES(input, output, start - 1, end);
	}
}
