﻿/*4.1 Напишите программу выводит h(a,b,c)—высоту,опущенную на сторону a в треугольнике со сторонами a,b,c,
если такой треугольник существует,или выводит −1 в противном случае*/
#include <iostream>
using namespace std;
int main()
{
    float a, b, c, h, p, s;
    setlocale(LC_ALL, "ru");
    cout << "Введите стороны треугольника";
    cin >> a >> b >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        p = (a + b + c) / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        h = (2 * s) / a;
        cout << "Высота треугольника, опущенная на сторону а = " << h;
    }
    else cout << "-1";
}


