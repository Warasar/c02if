/*Напишите программу, которая по целому числу n, номеру месяца в году, выводит название этого месяца.
Например, ввод: 1, вывод : "январь"; ввод: 2, вывод : "февраль".Для n > 12 или n < 1 программа должна печатать ERROR*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    setlocale(LC_ALL, "ru");
    switch (n)
    {
    case 1:
        cout << "ЯНВАРЬ";
        break;
    case 2:
        cout << "ФЕВРАЛЬ";
        break;
    case 3:
        cout << "МАРТ";
        break;
    case 4:
        cout << "АПРЕЛЬ";
        break;
    case 5:
        cout << "МАЙ";
        break;
    case 6:
        cout << "ИЮНЬ";
        break;
    case 7:
        cout << "ИЮЛЬ";
        break;
    case 8:
        cout << "АВГУСТ";
        break;
    case 9:
        cout << "СЕНТЯБРЬ";
        break;
    case 10:
        cout << "ОКТЯБРЬ";
        break;
    case 11:
        cout << "НОЯБРЬ";
        break;
    case 12:
        cout << "ДЕКАБРЬ";
        break;
    default:
        cout << "ERROR";
        break;
    }

}