#include <iostream>

using namespace std;

int main()
{
	int x, y;
	setlocale(0, "ukr");

	cout << "����� ��� �����" << endl;
	cin >> x >> y;

	int r1 = x / y;
	cout << "\n ��������� r1: " << r1 << endl;

	int r2 = x % y;
	cout << "\n ��������� r2: " << r2 << endl;

	x = (5, 8);

	cout << "\n ��������� x: " << x << endl;

	getchar();

	return 0;
}