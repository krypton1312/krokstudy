#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
double a, b, c, x, h, d, x1, x2;

int main() {
	setlocale(0, "ukr");
	cout << "������� h:"; cin >> h;

	a = sqrt(abs(sin(8 * h) + 17) / (1 - sin(4 * h) * cos(h * h + 18)) * (1 - sin(4 * h) * cos(h * h + 18)));

	b = 1 - sqrt(3 / 3 + abs(tan(a * h * h) - sin(a * h)));

	c = a * h * h * sin(b * h) + b * h * h * h * cos(a * h);
	
	d = b * 2 - 4 * a * c;

	if (d == 0)
	{
		x = -(b / 2 * a);
		cout << "� ������ ��������� h, ��������� ����� 1 ������: "<< x << "." << endl;
	}
	else if (d > 0)
	{
		x1 = -b + sqrt(d) / 2 * a;
		x2 = -b - sqrt(d) / 2 * a;
		cout << "� ������ ��������� h, ��������� ����� 2 �����: "<< x1 << " , " << x2 << "." << endl;
	}
	else
	{
		cout << "� ������ ��������� h, ��������� ����� 0 ������" << endl;
	}
	return 0;
	


}