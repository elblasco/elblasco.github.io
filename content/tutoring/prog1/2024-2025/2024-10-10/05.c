#include <stdio.h>

#define N 100

// Dichiarazione delle funzioni

int main(){
	char a[N] = {'G', 'N', 'U', '\'', 's' , ' ','N', 'o', 't', ' ', 'U', 'n',
				 'i', 't', 'n', '\0'};
	char b[N];
	int n = N;

	// Chiamata delle funzioni
	
	printf("La stringa copiata ha valore %s\n", b);
	return 0;
}

// Implementazione delle funzioni
