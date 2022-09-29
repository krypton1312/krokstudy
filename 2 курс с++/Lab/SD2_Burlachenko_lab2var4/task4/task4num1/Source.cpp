#include <iostream>

using namespace std;
int x, y, z;

int main()
{
	setlocale(0, "ukr");
	cout << "Задача для выяснения существует ли треугольник со сторонами x, y, z." << endl;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	cout << "z=";
	cin >> z;
	if ((x + y > z) && (x + z > y) && (z + y > x))
	{
		cout << "С данными сторонами может существовать треугольник" << endl;

	}
	else
	{
		cout << "С данными сторонами не может существовать треугольник" << endl;
	
	}
	


	return 0;
}

