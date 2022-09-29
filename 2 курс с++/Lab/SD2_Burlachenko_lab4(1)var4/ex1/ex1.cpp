#include <iostream>

using namespace std;

int main()
{
	int a[100]; //визначення розміру масиву
	int i, n, num;
	cout << " Input the number of array elements n=";
	cin >> n; //введення розміру масиву

	cout << " Input the array elements\n";
	for (i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i]; //введення елементів масиву
	}
	num = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] < 6)
			num += 1;
	}
	cout << "\n numbers that less then 6 = " << num << endl;
	system("pause");
	return 0;
