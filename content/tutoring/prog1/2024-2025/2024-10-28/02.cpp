#include <iostream>

#define MAX_SIZE 100

using namespace std;

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
    cout << "Base 4: " << output << endl;
    return 0;
}

// Implementazione delle funzioni
