// объ€влени€ символьной переменной
//char symbol = 'a';
//  где symbol Ц им€ переменной типа  char
//  char Ц тип данных дл€ хранени€ символов
// пример объ€влени€ строки
//char string[10];
//  где string Ц им€ строковой переменной              
//      10 Ц размер массива, то есть в данной строке может поместитьс€ 9 символов , последнее место отводитс€ под нуль-терминатор.

// symbols.cpp: определ€ет точку входа дл€ консольного приложени€.

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    char string[] = "this is string - "; // объ€вление и инициализаци€ строки
    cout << "Enter the string: ";
    char in_string[500]; // строковый массив дл€ ввода 
    gets(in_string); // функци€ gets() считывает все введЄнные символы с пробелами до тех пор, пока не будет нажата клавиша Enter 
    cout << string << in_string << endl; // вывод строкового значени€
    system("pause");
    return 0;
}
