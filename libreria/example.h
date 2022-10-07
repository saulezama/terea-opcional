#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

bool resize(int* arr, int n, int nuevoN);
bool add(int _Value, int* arr, int N);
bool add(int _pos, int _Value, int* arr, int N);
void ordenar(int* arr, int N);
bool remove(int _Value, int* arr, int N);
bool removePos(int _pos, int* arr, int N);
