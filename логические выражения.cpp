#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::boolalpha);

    bool r; // создаем переменную bool типа
    int a = 10, b = 7; // а также две переменные типа int

    r = (a < b) && (b == 7); // r равно false, поскольку a > b
    cout << "r = " << r << endl; // вывод результата

    r = a < b || b == 7; // r равен true
    cout << "r = " << r << endl; // вывод результата

    r = (a < b) xor (b == 7); // r равен true, поскольку только b == 7 верно
    cout << "r = " << r << endl; // вывод результата

    r = !(a == 10 && (b <= 8 || true)); // комбинируем целую кучу операторов
    cout << "r = " << r << endl; // и снова выводим результат

    return 0;
}