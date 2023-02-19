#include <iostream>
using namespace std;
/*
Оператор цикла с предусловием
12. Дано целое число N > 1.
Вывести наибольшее из целых чисел K, для которых сумма 1 + 2 + ... + K будет меньше или равна N, и саму эту сумму.
*/
int main()
{
	setlocale(LC_ALL, "Russian");

	int N;
	int k = 0;
	int sum = 0;
	cin >> N;

	while (sum <= N) {
		k += 1;
		sum += k;
	}
	cout << k << endl;
	cout << sum;
	return 0;
}