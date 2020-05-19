/*
 1. Напишите программу, которая вводит с клавиатуры одно целое число,
	и выводит POL, если оно положительно, OTR — если отрицательно, и
	NUL, если это нуль.
*/
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	if (n > 0)
		cout << "POL\n";
	if (n < 0)
		cout << "OTR\n";
	if (n == 0)
		cout << "NUL\n";
}