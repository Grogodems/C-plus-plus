#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::boolalpha);

    bool r; // ������� ���������� bool ����
    int a = 10, b = 7; // � ����� ��� ���������� ���� int

    r = (a < b) && (b == 7); // r ����� false, ��������� a > b
    cout << "r = " << r << endl; // ����� ����������

    r = a < b || b == 7; // r ����� true
    cout << "r = " << r << endl; // ����� ����������

    r = (a < b) xor (b == 7); // r ����� true, ��������� ������ b == 7 �����
    cout << "r = " << r << endl; // ����� ����������

    r = !(a == 10 && (b <= 8 || true)); // ����������� ����� ���� ����������
    cout << "r = " << r << endl; // � ����� ������� ���������

    return 0;
}