// ���������� ���������� ����������
//char symbol = 'a';
//  ��� symbol � ��� ���������� ����  char
//  char � ��� ������ ��� �������� ��������
// ������ ���������� ������
//char string[10];
//  ��� string � ��� ��������� ����������              
//      10 � ������ �������, �� ���� � ������ ������ ����� ����������� 9 �������� , ��������� ����� ��������� ��� ����-����������.

// symbols.cpp: ���������� ����� ����� ��� ����������� ����������.

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    char string[] = "this is string - "; // ���������� � ������������� ������
    cout << "Enter the string: ";
    char in_string[500]; // ��������� ������ ��� ����� 
    gets(in_string); // ������� gets() ��������� ��� �������� ������� � ��������� �� ��� ���, ���� �� ����� ������ ������� Enter 
    cout << string << in_string << endl; // ����� ���������� ��������
    system("pause");
    return 0;
}
