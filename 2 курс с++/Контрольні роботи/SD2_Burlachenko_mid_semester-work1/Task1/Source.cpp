#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(0, "ukr");
	int n = 10, sum = 0;
	int* mas = new int[n];
	int i = 0;
	for (i; i < n; i++) {
		mas[i] = rand() % (10 - 1 + 1) + 1;
		cout << "mas[" << i << "]=" << mas[i] << endl;
	}
	for (int b = 0; b < 10; b++)
	{
		if (mas[b] % 2 == 1)
		{

			sum += mas[b];
		}
	}
	cout << "Сумма нечетных элементов массива: " << sum << endl;
	delete[]mas;
	getchar();
}