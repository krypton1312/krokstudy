#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	float a, b;
	setlocale(0, "ukr");
	cout << "¬вед≥ть A та B" << endl;
	cin >> a;
	cin >> b;
	if (a > b)
		cout << "„исло " << a << " б≥льше " << endl;
	else if (a < b)
		cout << "„исло " << b << " б≥льше " << endl;
	else
		cout << "„исла равные " << endl;
	_getch();
}