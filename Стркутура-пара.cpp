#include <iostream>
#include <stdio.h>
using namespace std;

/*
�������� ��������� y=Ax+B. ���� first - ������� �����, ����������� �;
���� second � ������� �����, ����������� �.
����������� ����� function() � ���������� ��� ��������� x �������� ������� y.
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
	cout << "�������� X:";
	cin >> a;
	one.function(a);
	return 0;
}