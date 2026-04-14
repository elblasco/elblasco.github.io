#include <iostream>

using namespace std;

// Dichiarazione delle funzioni

int main(){
	char frase[] = "itopinonavevanonipoti"; // 0-palindroma
	//char frase[] = "azunaverapiadonnaeisimilifilimisieanxodaiparevanuda"; // 2-palindroma
	int k = 0;
	//int k = 2;
	int n = lunghezza(frase);
	
	if(k_palindroma(frase, 0, n - 1, k)){
		cout << "La frase è " << k << "-palindroma" << endl;
	}
	else{
		cout << "La frase non è " << k << "-palindroma" << endl;
	}
	
	return 0;
}

// Implementazione delle funzioni
