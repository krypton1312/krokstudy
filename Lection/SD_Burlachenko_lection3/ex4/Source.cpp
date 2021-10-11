#include <iostream>

using namespace std;

int main()
{
	int x, y;
	setlocale(0, "ukr");

	cout << "Ведіть два числа" << endl;
	cin >> x >> y;

	int r1 = x / y;
	cout << "\n результат r1: " << r1 << endl;

	int r2 = x % y;
	cout << "\n результат r2: " << r2 << endl;

	x = (5, 8);

	cout << "\n результат x: " << x << endl;

	getchar();

	return 0;
}