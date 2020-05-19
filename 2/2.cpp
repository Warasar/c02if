/*
 2. Напишите программу, которая вводит с клавиатуры один символ, и
 выводит DIGIT, этот символ является цифрой, CAPITAL - если
 заглавной латинской буквой, LOWERCASE - если строчной, и выводит
 NON-ALPHANUMERIC в противном случае.
*/
// или раскомментируйте это, если вам больше нравится iostream:
// #include <iostream>
// using namespace std;

#include <iostream>
using namespace std;
int main(void)
{
	char symb;
	cin >> symb;

	if (symb >= '0' && symb <= '9')
		cout << ("DIGIT") << endl;
	else if (static_cast<int>(symb) >= 65 && static_cast<int>(symb) <= 90)
		cout << ("CAPITAL") << endl;
	else if (static_cast<int>(symb) >= 97 && static_cast<int>(symb) <= 122)
		cout << ("LOWERCASE") << endl;
	else cout << ("NON_ALPHANUMERIC");
}
