/*
  4. Напишите программу, которая вводит с клавиатуры возраст n лет и
  выводит сообщение ВАМ n ЛЕТ/ГОДА/ГОД, используя правильное слово,
  если 1 <= n <= 100, или ERROR в противном случае (используйте
  setlocale("ru", LC_ALL);).
*/
#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include<locale.h> 
using namespace std;

int main()
{
    int n,a;
    cin >> n;
    setlocale(LC_ALL, "RUS");
    a = n % 10;
    if (a == 1) {
        cout << "ВАМ " << n << " ГОД";
        exit;
    }
    else
        if (a >= 2 && a <= 4)
        cout << "ВАМ " << n << " ГОДА";
        else
        cout << "ВАМ " << n << " ЛЕТ";
}