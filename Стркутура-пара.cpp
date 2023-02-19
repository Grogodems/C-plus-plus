#include <iostream>
#include <stdio.h>
using namespace std;

/*
Линейное уравнение y=Ax+B. Поле first - дробное число, коэффициент А;
поле second – дробное число, коэффициент В.
Реализовать метод function() – вычисление для заданного x значения функции y.
*/

struct solution {
	double first;
	double second;

	void function(int x) {
		cout << "y=" << first * x + second << endl;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	solution one;
	one.first = 2.5;
	one.second = 4.0;
	int a;
	cout << "Вставьте X:";
	cin >> a;
	one.function(a);
	return 0;
}