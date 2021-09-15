#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double a, b, c, alfa, beta;
	// Введення значень сторін
	cout << "A=";
	cin >> a;
	cout << "B=";
	cin >> b;
	// Обчислення гіпотенузи і кутів
	c = pow(a * a + b * b, 0.5);
	alfa = atan(a / b);
	beta = 3.14159 / 2 - alfa;
	// Виведення
	cout << "\n A=" << a << "\t B=" << b << "\t C=" << c << "\n";
	cout << "\n alfa=" << alfa * 180 / 3.14159;
	cout << "\t beta=" << beta * 180 / 3.14159 << endl;
	return 0;
}