#include <iostream>
using namespace std;
/*
�������� ����� � ������������
12. ���� ����� ����� N > 1.
������� ���������� �� ����� ����� K, ��� ������� ����� 1 + 2 + ... + K ����� ������ ��� ����� N, � ���� ��� �����.
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