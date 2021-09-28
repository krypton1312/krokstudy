#include <iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
	int i;
	double x, y, h, a, b;
	cout << "Input a: " << endl;
	cin >> a;
	cout << "Input b: " << endl;
	cin >> b;
	cout << "Input h: " << endl;
	cin >> h;
	x = a;
	cout << setw(10) << " x" << setw(12) << setprecision(6) << "y" << endl <<
		endl;
	while (x <= b)
	{
		y = (7 * x + 4) / (3 * x + 5) + cos(x);
		cout << setw(10) << x << setw(12) << setprecision(6) << y << endl;
		x = x + h;
	}
	_getch();
	return 0;
}