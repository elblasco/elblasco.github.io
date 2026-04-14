#include <iostream>

#define N 5
#define M 5

using namespace std;

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

	cout << "Ci sono" << count_island(map,n,m) << " isole" << endl;
	
	return 0;
}

// Implementazione delle funzioni
