#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cin >> a >> b >> c;
	if ((a < b) && (a < c)) {
		cout << "���������� ����� : " << a;
	}
	else if ((b < a) && (b < c)) {
		cout << "���������� ����� : " << b;
	}
	else if ((c < a) && (c < b)) {
		cout << "���������� ����� : " << c;
	}
	else {
		cout << "��� ����������� �����";
	}
	return 0;
}