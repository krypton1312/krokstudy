#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
int a, b, c, x, h, d;

int main() {
	setlocale(0, "ukr");
	cout << "������� h:"; cin >> h;

	a = sqrt(abs(sin(8 * h) + 17) / (1 - sin(4 * h) * cos(h * h + 18)) * (1 - sin(4 * h) * cos(h * h + 18)));

	b = 1 - sqrt(3 / 3 + abs(tan(a * h * h) - sin(a * h)));

	c = a * h * h * sin(b * h) + b * h * h * h * cos(a * h);

	if (d == 0)
	{
		cout << "� ������ ��������� h, ��������� ����� 1 ������" << endl;
	}
	else if (d > 0)
	{
		cout << "� ������ ��������� h, ��������� ����� 2 �����" << endl;
	}
	else
	{
		cout << "� ������ ��������� h, ��������� ����� 0 ������" << endl;
	}
	return 0;
	


}