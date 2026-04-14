#ifndef CODA_H
#define CODA_H

enum Bool {True, False};

typedef enum Bool Bool;

struct Coda{
	int* array;
	int dimensione;
	int fronte;
	int ultimo;
};

typedef struct Coda Coda;

Coda init_coda(int dimensione);
void deinit_coda(Coda& coda);
Bool is_empty_coda(const Coda& coda);
void enqueue(Coda& coda, int nuovo_numero);
int dequeue(Coda& coda);

struct Coda_Priorita {
	Coda code[2];
};

typedef struct Coda_Priorita Coda_Priorita;

Coda_Priorita init_priorita(int dimensione);
void deinit_priorita(Coda_Priorita& cod_prior);
Bool is_empty_priorita(const Coda_Priorita& cod_prior);
void enqueue_priorita(Coda_Priorita& cod_prior, int nuovo_numero);
int dequeue_priorita(Coda_Priorita& cod_prior);

#endif
