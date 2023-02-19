#include <iostream>
#include <string>

using namespace std;

/*Создать класс Fraction для работы с дробными числами.
Число должно быть представлено двумя полями: целая часть – длинное целое со знаком,
дробная часть – беззнаковое короткое целое.
Реализовать арифметические операции сложения, вычитания, умножения и операции сравнения.*/

class Fraction {
private:
    long first;
    unsigned short second;


public:
    //создаём класс и переменные в нём
    Fraction() {
        first = 0;
        second = 0;
    }
    //заполняем его
    void init(long f, unsigned short s) {
        first = f;
        second = s;
    }
    //вывод переменных
    void read() {
        cout << "First part: ";
        cin >> first;
        cout << "Second part: ";
        cin >> second;
    }
    //вывод общего результата
    void display() {
        cout << "Number: " << first << "." << second << endl;
    }

    string toString() {
        string s = to_string(first) + "." + to_string(second);
        return s;
    }
    //сумма
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
        cout << "Сумма: " << one + two << endl;
    }
    //разность
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
        cout << "Разность: " << one - two << endl;
    }
    //умножение
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
        cout << "Умножение: " << one * two << endl;
    }
    //Равность
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
            cout << "Одинаковы." << endl;
        else if (one > two)
            cout << "Первое число больше второго" << endl;
        else
            cout << "второе число больше первого" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");
    Fraction A, B, C;

    A.read();
    A.display();
    cout << "Число 1: " << A.toString() << "\n\n";

    B.read();
    B.display();
    cout << "Число 2: " << B.toString() << "\n\n";

    C.Summa(A, B);
    C.Ras(A, B);
    C.Mul(A, B);
    C.Equal(A, B);
}