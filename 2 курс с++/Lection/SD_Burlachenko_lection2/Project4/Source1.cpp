#include <iostream>

using namespace std;

int main1()
{
	char c, prev, next;
	setlocale(0, "ukr");
	cout << "Введіть символ => \n";
	cin >> c;

	prev = c; next = c;
	cout << "Попередній - " << --prev << "код - " << (int)prev << "\n Наступній - " << ++next << "код - " << (int)next << endl;
}
