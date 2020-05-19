/*
 3. Введите с клавиатуры год в интервале от 1582 до 2200, выведите LEAP,
 если он високосный, или NORMAL, если нет. Выведите ERROR, если
 номер года больше 2200 или меньше 1582. (К примеру, 2019 год - не
 високосный, 2020 - високосный, 1900 и 2100 - не високосные, 2000 -
 високосный.)
*/
#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cin >> a;
    if ((a > 2200) || (a < 1582))
        cout << "ERROR" << endl;
    else {
        b = a / 4;
        c = a / 200;
    }
    if ((round(b) == b) && (round(c) == c))
        cout << "VISOKOSNIY" << endl;
    else cout << "NE VISOKOSNIY" << endl;
}