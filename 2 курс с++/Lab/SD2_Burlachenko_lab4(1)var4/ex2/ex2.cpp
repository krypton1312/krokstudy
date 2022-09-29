#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));

	int a[100]; //визначення розміру масиву
	int i, n, num;
	cout << " Input the number of array elements n=";
	cin >> n; //введення розміру масиву
	int summa;
	summa = 0;
	for (i = 0; i < n; i++)
	{
		a[i] = -10 + rand() % 10;
		summa = summa + a[i];
		cout << "a[" << i << "]=" << a[i] << endl;
	}
	
	float total = summa / n;
	cout << "\n total= " << total << endl;
	system("pause");
	return 0;
}