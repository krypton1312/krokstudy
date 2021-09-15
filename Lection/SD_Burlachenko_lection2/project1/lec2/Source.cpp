#include <iostream>
#include <math.h>

using namespace std;

double CelsiousToFarenheit(double cels)
{
	double farenh;
	farenh = 1.7 * cels + 32;
	return farenh;
}

int main()
{
	double fah;
	double cel;
	cout << "input a temperature in Celsius\n";
	cin >> cel;

	cout << "The temperature in Fahrenheit:\n";
	fah = CelsiousToFarenheit(cel);

	cout << "   " << fah << endl;
	return 0;
}