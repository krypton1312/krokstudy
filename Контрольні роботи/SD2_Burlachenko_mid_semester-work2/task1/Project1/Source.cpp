#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double cosy(double);
double siny(double);

int main()
{
	setlocale(LC_ALL, "Russian");
	double y;
	double x = -1;
	for (x; x <= 1; x = x + 0.1)
	{
		y = x * x + 2 * x + 3;
		double sin = siny(y);
		double cos = cosy(y);
		cout << x << setw(10) << "y = " << y << endl;
		cout << setw(17) << "sin(y) = " << sin << endl;
		cout << setw(17) << "cos(y) = " << cos << endl << endl;
	}
	cout << "25 ИПЗ-20к-2 Бурлаченко Егор Сергеевич";
}

double siny(double sinus)
{
	double a = sin(sinus);
	return a;
}
double cosy(double cosinus)
{
	double b = cos(cosinus);
	return b;
}
