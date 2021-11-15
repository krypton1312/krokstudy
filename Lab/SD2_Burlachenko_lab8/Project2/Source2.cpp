#include <ctime>
#include <iostream>
using namespace std;

// Функция генерирования случайного целочисленного числа в указанных пределах.
// Диапазон чисел: [min, max]
int GetRandomNumber(int min, int max)
{
	// Установить генератор случайных чисел
	srand(time(NULL));
	// Установка диапазона
	cin >> min;
	cin >> max;
	// Получить случайное число - формула
	int num = min + rand() % (max - min + 1);

	return num;
}

void main()
{
	// Использование функции GetRandomNumber()
	int number;
	number = GetRandomNumber(-10, 10); // Диапазон чисел: [-10, 10]
	cout << "number = " << number << endl;;
}