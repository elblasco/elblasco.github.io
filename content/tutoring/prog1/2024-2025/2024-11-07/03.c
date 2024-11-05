#include <stdio.h>
#include <stdbool.h>

// Dichiarazione delle funzioni

int main(){
	//char* frase = "itopinonavevanonipoti"; // 0-palindroma
	char* frase = "azunaverapiadonnaeisimilifilimisieanxodaiparevanuda"; // 2-palindroma
	int k = 0;
	//int k = 2;
	int n = lunghezza(frase);
	
	if(k_palindroma(frase, 0, n - 1, k)){
		printf("La frase è %d-palindroma\n",k);
	}
	else{
		printf("La frase non è %d-palindroma\n",k);
	}
	
	return 0;
}

// Implementazione delle funzioni
