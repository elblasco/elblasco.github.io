#ifndef LISTA_H
#define LISTA_H

struct Bancarella {
	char* nome;
	int prezzo_medio;
	int distanza_entrata;
};

typedef struct Bancarella Bancarella;

int compare(const Bancarella* A, const Bancarella* B);
Bancarella* init_bancarella(const char* nome, int prezzo, int distanza);
void deinit_bancarella(Bancarella* bancarella);

struct Lista{
	Bancarella** bancarelle;
	int dimensione;
	int ultimo_indice;
};

typedef struct Lista Lista;

Lista init_lista(int dimensione);
void add(Lista &lista, Bancarella* nuova);
void print_lista(const Lista lista);
void deinit_lista(Lista &lista);
#endif
