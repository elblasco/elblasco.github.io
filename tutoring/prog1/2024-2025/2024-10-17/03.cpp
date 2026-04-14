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
