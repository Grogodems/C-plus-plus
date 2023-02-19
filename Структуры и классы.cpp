#include <iostream>
#include <string>

using namespace std;

/*������� ����� Fraction ��� ������ � �������� �������.
����� ������ ���� ������������ ����� ������: ����� ����� � ������� ����� �� ������,
������� ����� � ����������� �������� �����.
����������� �������������� �������� ��������, ���������, ��������� � �������� ���������.*/

class Fraction {
private:
    long first;
    unsigned short second;


public:
    //������ ����� � ���������� � ��
    Fraction() {
        first = 0;
        second = 0;
    }
    //��������� ���
    void init(long f, unsigned short s) {
        first = f;
        second = s;
    }
    //����� ����������
    void read() {
        cout << "First part: ";
        cin >> first;
        cout << "Second part: ";
        cin >> second;
    }
    //����� ������ ����������
    void display() {
        cout << "Number: " << first << "." << second << endl;
    }

    string toString() {
        string s = to_string(first) + "." + to_string(second);
        return s;
    }
    //�����
    static void Summa(Fraction a, Fraction b) {
        double one, two;
        one = a.second;
        while (one > 1)
            one /= 10;
        one += a.first;
        two = b.second;
        while (two > 1)
            two /= 10;
        two += b.first;
        cout << "�����: " << one + two << endl;
    }
    //��������
    static void Ras(Fraction a, Fraction b) {
        double one, two;
        one = a.second;
        while (one > 1)
            one /= 10;
        one += a.first;
        two = b.second;
        while (two > 1)
            two /= 10;
        two += b.first;
        cout << "��������: " << one - two << endl;
    }
    //���������
    static void Mul(Fraction a, Fraction b) {
        double one, two;
        one = a.second;
        while (one > 1)
            one /= 10;
        one += a.first;
        two = b.second;
        while (two > 1)
            two /= 10;
        two += b.first;
        cout << "���������: " << one * two << endl;
    }
    //��������
    static void Equal(Fraction a, Fraction b) {
        double one, two;
        one = a.second;
        while (one > 1)
            one /= 10;
        one += a.first;
        two = b.second;
        while (two > 1)
            two /= 10;
        two += b.first;

        if (one == two)
            cout << "���������." << endl;
        else if (one > two)
            cout << "������ ����� ������ �������" << endl;
        else
            cout << "������ ����� ������ �������" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");
    Fraction A, B, C;

    A.read();
    A.display();
    cout << "����� 1: " << A.toString() << "\n\n";

    B.read();
    B.display();
    cout << "����� 2: " << B.toString() << "\n\n";

    C.Summa(A, B);
    C.Ras(A, B);
    C.Mul(A, B);
    C.Equal(A, B);
}