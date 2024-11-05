#include <stdio.h>

#define N 5
#define M 5

// Dichiarazione delle funzioni

int main(){
	int n = N;
	int m = M;

	int map[N][M] = {
		{1, 1, 0, 0, 0},
		{1, 0, 0, 0, 1},
		{0, 0, 1, 0, 0},
		{0, 0, 0, 0, 1},
		{1, 0, 0, 1, 1}
	};

	printf("Ci sono %d isole\n", count_island(map,n,m));
	
	return 0;
}

// Implementazione delle funzioni
