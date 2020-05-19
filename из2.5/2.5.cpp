/*Напишите программу, которая вводит вещественные координаты x1, y1,x2,y2,x3,y3 треx точек на плоскости.
Если они являются вершинами равнобедренного треугольника, то программа выводит площадь треугольника,
впротивномслучаевыводит −1*/

#include <iostream>
using namespace std;
int main()
{
    float x1,x2,x3,y1,y2,y3,a,b,c,s;
    cout << "Vvedite 1 tochku: ";
    cin >> x1 >> y1;
    cout << "Vvedite 2 tochku: ";
    cin >> x2 >> y2; 
    cout << "Vvedite 3 tochku: ";
    cin >> x3 >> y3;

    a = sqrt(x1 * x1 + y1 * y1);
    b = sqrt(x2 * x2 + y2 * y2);
    c = sqrt(x3 * x3 + y3 * y3);

    if (a == b)
    {
        s = (c * sqrt(a * a * 4 - c * c)) / 4;
        cout << s;
    }
    else
        if (a == c)
        {
            s = (b * sqrt(a * a * 4 - b * b)) / 4;
            cout << s;
        }
        else
            if (c == b)
            {
                s = (a * sqrt(c * c * 4 - a * a)) / 4;
                cout << s;
            }
            else cout << "-1";
    }