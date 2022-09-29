#include <iostream>
#include <Windows.h> // Файл Windows.h потрібен для коректного виведення
//та введення укр символів в консолі
#include <conio.h>
#include <iomanip>

using namespace std;
int main()
{
	int i;
	int n;
	double x, S;
	SetConsoleCP(1251); // встановлення кодування Windows-1251
	// в потік введення для коректного введення
	// укр символів в консолі)
	SetConsoleOutputCP(1251);
	S = 0;
	cout << "Введіть n=";
	cin >> n;
	for (i = 1; i <= n; i+=2)
	{
		S = S + i;
		cout << setw(4) << i << setw(6) << S << endl;
	}
	cout << "Сума S=" << S << endl;
	_getch();
	return 0;
}