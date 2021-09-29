#include <iostream>
#include <math.h>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	double y, x;
	y = 0;
	for (x = 0; x <= 180; x = x + 6)
	{
		y = cos(x);
		
		cout << setw(10) << " x" << setw(12) << setprecision(6) << "y" << endl << endl;
		cout << setw(10) << x << setw(12) << setprecision(6) << y << endl << endl;

	}
	_getch();
		return 0;
}