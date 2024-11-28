#include "lista.h"
#include <iostream>

using namespace std;

int main(){
	Bancarella* b1 = init_bancarella("Bancarella1", 10, 100);
	deinit_bancarella(b1);
	b1 = init_bancarella("Bancarella1", 10, 100);
	
	Bancarella* b2 = init_bancarella("Bancarella2", 20, 200);
	Bancarella* b3 = init_bancarella("Bancarella3", 30, 300);
	Bancarella* b4 = init_bancarella("Bancarella4", 40, 400);
	Bancarella* b5 = init_bancarella("Bancarella5", 50, 500);
	Lista lista = init_lista(420);

	deinit_lista(lista);

	lista = init_lista(69);

	// Linea vuota
	print_lista(lista);
	
	add(lista, b5);
	add(lista, b4);
	add(lista, b2);
	add(lista, b3);
	add(lista, b1);

	// Bancarella1 Bancarella2 Bancarella3 Bancarella4 Bancarella5
	print_lista(lista);

	deinit_lista(lista);
	
	return 0;
}
