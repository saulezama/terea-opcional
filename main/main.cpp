#include "example.h"

int main() {
	int n = 4, i = 0;
	srand(time(NULL));

	int* arrayEjercicio = new int[n];

	for (i = 0; i < n; i++) {
		arrayEjercicio[i] = rand() % (10) + 1;
	}

	resize(arrayEjercicio, n, 3);

	cout << n;

	add(3, arrayEjercicio, n);

	cout << arrayEjercicio[n - 1];

	add(0, 3, arrayEjercicio, n);

	cout << arrayEjercicio[0];

	remove(3, arrayEjercicio, n);


	remove(0, arrayEjercicio, n);
}
