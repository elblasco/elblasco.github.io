#include "coda.h"
#include <iostream>

using namespace std;

// Ho estratto -1
// Ho estratto 3
// Ho estratto 0
// Ho estratto 2
// Ho estratto 3
// Ho estratto 5
// Ho estratto 1
// Ho estratto -1

int main(){
	Coda_Priorita prior_queue = init_priorita(5);
	cout << "Ho estratto " << dequeue_priorita(prior_queue) << endl;
	deinit_priorita(prior_queue);

	prior_queue = init_priorita(10);
	enqueue_priorita(prior_queue, 3);
	cout << "Ho estratto " << dequeue_priorita(prior_queue) << endl;

	enqueue_priorita(prior_queue, 3);
	enqueue_priorita(prior_queue, 0);
	enqueue_priorita(prior_queue, 5);
	enqueue_priorita(prior_queue, 1);
	enqueue_priorita(prior_queue, 2);

	while (is_empty_priorita(prior_queue) == False) {
		cout << "Ho estratto " << dequeue_priorita(prior_queue) << endl;
	}

	cout << "Ho estratto " << dequeue_priorita(prior_queue) << endl;

	deinit_priorita(prior_queue);
	return 0;
}
