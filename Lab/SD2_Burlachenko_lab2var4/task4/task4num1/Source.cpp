#include <iostream>

using namespace std;
int x, y, z;

int main()
{
	setlocale(0, "ukr");
	cout << "������ ��� ��������� ���������� �� ����������� �� ��������� x, y, z." << endl;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	cout << "z=";
	cin >> z;
	if ((x + y > z) && (x + z > y) && (z + y > x))
	{
		cout << "� ������� ��������� ����� ������������ �����������" << endl;

	}
	else
	{
		cout << "� ������� ��������� �� ����� ������������ �����������" << endl;
	
	}
	


	return 0;
}

