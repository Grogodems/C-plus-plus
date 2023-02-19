#include <iostream>
#include <stdio.h>
using namespace std;
/*
Одномерный массив
12. Дан массив A размера N. Найти максимальный элемент из его элементов с нечетными номерами: A1, A3, A5, ....
*/
int main(void)
{
	setlocale(LC_ALL, "Russian");

	int  N, i;
	int a[10];


	cout << "Введите N : ";
	cin >> N;

	for (i = 0; i < N; ++i) {
		//cout << i + 1 << endl;
		printf("a[%i] : ", i + 1);
		scanf_s("%i", &a[i]);
		//cin >> a[i];
	}
	int max = a[0];

	for (i = 0; i < N; i += 2) {
		if (a[i] > max) {
			max = a[i];
		}
	}

	cout << max;
	return 0;
}