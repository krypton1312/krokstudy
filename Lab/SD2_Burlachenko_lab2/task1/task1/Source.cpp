#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	float a, b;
	setlocale(0, "ukr");
	cout << "������ A �� B" << endl;
	cin >> a;
	cin >> b;
	if (a > b)
		cout << "����� " << a << " ����� " << endl;
	else if (a < b)
		cout << "����� " << b << " ����� " << endl;
	else
		cout << "����� ������ " << endl;
	_getch();
}