#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cin >> a >> b >> c;
	if ((a < b) && (a < c)) {
		cout << "Наименьшее число : " << a;
	}
	else if ((b < a) && (b < c)) {
		cout << "Наименьшее число : " << b;
	}
	else if ((c < a) && (c < b)) {
		cout << "Наименьшее число : " << c;
	}
	else {
		cout << "Нет наименьшего числа";
	}
	return 0;
}