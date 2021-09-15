#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
double x, y;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	cout << "Васап, назови X" << endl;
	cin >> x;
	if (x > 0)
	{
		y = cos(x) - 1;
		cout << "При x = " << x << " y = " << y << endl;
	}

	else
	{
		y = sin(pow(x, 2)) + 1;
		cout << "При x = " << x << " y = " << y << endl;


	}
}