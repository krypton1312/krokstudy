#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
double x, y;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	cout << "�����, ������ X" << endl;
	cin >> x;
	if (x > 0)
	{
		y = cos(x) - 1;
		cout << "��� x = " << x << " y = " << y << endl;
	}

	else
	{
		y = sin(pow(x, 2)) + 1;
		cout << "��� x = " << x << " y = " << y << endl;


	}
}