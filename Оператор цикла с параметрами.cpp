#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int i; //���������� ����������
	int sum = 0;
	for (i = 1; i <= 500; i = i + 1) // ������ ��������� ��������, �������� 500, ��� �����
	{
		sum = sum + i;
	}
	cout << "The sum of the numbers from 1 to 500 = " << sum << endl;
	system("pause");
	return 0;
}