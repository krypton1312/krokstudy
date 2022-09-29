#include <iostream>

using namespace std;
float lenghtOfTriangle(float, float, float, float);
bool isTriangle(float, float , float);
int main() 
{
	setlocale(LC_ALL, "Russian");
	float AX, BX, CX, AY, BY, CY, A1X, B1X, C1X, A1Y, B1Y, C1Y;
	float per1, per2;
	cout << "========================================" << endl;
	cout << "Введите координаты вершин двух треугольников." << endl;
	cout << "Координаты A:" << endl;
	cout << "X = "; cin >> AX;
	cout << "Y = "; cin >> AY;
	cout << "Координаты B:" << endl;
	cout << "X = "; cin >> BX;
	cout << "Y = "; cin >> BY;
	cout << "Координаты C:" << endl;
	cout << "X = "; cin >> CX;
	cout << "Y = "; cin >> CY;
	cout << "========================================" << endl;
	cout << "Координаты A1:" << endl;
	cout << "X = "; cin >> A1X;
	cout << "Y = "; cin >> A1Y;
	cout << "Координаты B1:" << endl;
	cout << "X = "; cin >> B1X;
	cout << "Y = "; cin >> B1Y;
	cout << "Координаты C1:" << endl;
	cout << "X = "; cin >> C1X;
	cout << "Y = "; cin >> C1Y;
	cout << "========================================" << endl;
	float ab = lenghtOfTriangle(AX, AY, BX, BY);
	float bc = lenghtOfTriangle(BX, BY, CX, CY);
	float ca = lenghtOfTriangle(CX, CY, AX, AY);
	float ab1 = lenghtOfTriangle(A1X, A1Y, B1X, B1Y);
	float bc1 = lenghtOfTriangle(B1X, B1Y, C1X, C1Y);
	float ca1 = lenghtOfTriangle(C1X, C1Y, A1X, A1Y);
	bool triangle = isTriangle(ab,bc,ca);
	if (triangle == true)
	{
		per1 = ab + bc + ca;
		cout << "Периметр первого треугольнка ABC = " << per1 << endl;
	}
	else
	{
		cout << "Первый треугольник существовать не может." << endl;
	}
	bool triangle2 = isTriangle(ab1, bc1, ca1);
	if (triangle2 == true)
	{
		per2 = ab1 + bc1 + ca1;
		cout << "Периметр первого треугольнка ABC = " << per2 << endl;
	}
	else
	{
		cout << "Первый треугольник существовать не может."<< endl;
	}
	if (per1 < per2)
	{

		cout << "Периметр первого треугольника больше чем второй."<< endl;
	}
	else if(per1 = per2)
	{
		cout << "Периметры треугольников равны."<< endl;
	}
	else
	{
		cout << "Периметр второго треугольника больше чем первый." << endl;
	}
}
float lenghtOfTriangle(float ax, float ay, float bx, float by)
{
	float lenght = sqrt((bx - ax) * (bx - ax) + (by - ay) * (by - ay));
	return lenght;
}
bool isTriangle(float x, float y, float z)
{
	if (x + y > z && x + z > y && z + y > x)
		return true;
	else
		return false;
}