#include <stdio.h>

#define MAX_SIZE 100

int lunghezza_stringa(const char* input, int indice){
	if (input[indice] == '\0'){
		return 0;
	}
	else{
		return 1 + lunghezza_stringa(input, indice + 1);
	}
}

// Dichiarazione delle funzioni

int main() {
    char input[] = "110010";
	//char input[] = "010010";
	char output[MAX_SIZE];
    
    // Conversione da base 2 a base 4
    base_quattro(input, output);
    printf("Base 4: %s\n", output);
    return 0;
}

// Implementazione delle funzioni
