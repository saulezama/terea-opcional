#include "example.h"

bool resize(int* arr, int n, int nuevoN)
{
	int* arrAux = new int[n];
	if (arrAux == NULL) // verifico que se haya creado el puntero
		return false;

	memcpy(arrAux, arr, n * sizeof(int*)); //funcion que copia lo que esta en el orig en el nuevo
	delete[] arrAux;

	arr[nuevoN - 1] = NULL;
	arr = arrAux;

	return true;
}

bool add(int _Value, int* arr, int N) {
	if (resize(arr, N++, N) == true) {
		arr[N - 1] = _Value;
		return true;
	}
	return false;
}

bool add(int _pos, int _Value, int* arr, int N) {
	if (_pos >= 0 && _pos < N && arr[_pos] != NULL) {
		arr[_pos] = _Value;
		return true;
	}
	return false;
}

void ordenar(int* arr, int N) {
	int i = 0, j = 0;
	for (i = 0; i < N; i++) {
		for (j = i; j < N - 1; j++)
			if (arr[i] == NULL)
				swap(arr[j], arr[j + 1]);
	}
}

bool remove(int _Value, int* arr, int N) {
	int i = 0;
	for (i = 0; i < N; i++) {
		if (arr[i] == _Value) {
			arr[i] = NULL;
		}
	}

	N--;


	ordenar(arr, N);

	if (arr[N - 1] == NULL)
		return true;
	return false;
}

bool removePos(int _pos, int* arr, int N) {
	int i = 0, j = 0;

	if (_pos >= 0 && _pos < N && arr[_pos] != NULL) {
		arr[_pos] == NULL;
	}

	N--;

	ordenar(arr, N);

	if (arr[N - 1] == NULL)
		return true;
	return false;
}
