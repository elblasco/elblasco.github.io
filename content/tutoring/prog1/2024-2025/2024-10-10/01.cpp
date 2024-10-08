#include <iostream>

using namespace std;

// Dichiarazione delle funzioni

int main() {
    int x;
    int y;

	cout << "Inserire x: ";
	cin >> x;
	cout << "Inserire y: ";
	cin >> y;
	
    cout << "Prima dello scambio: x = " << x << ", y = " << y << endl;

    swap(x, y);

    cout << "Dopo lo scambio: x = " << x << ", y = " << y << endl;

    return 0;
}

// Implementazione delle funzioni
