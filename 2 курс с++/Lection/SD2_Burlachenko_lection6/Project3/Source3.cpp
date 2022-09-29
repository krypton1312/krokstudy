#include <iostream>
using namespace std;

//масив з додатних елементів двох масивів

int main()
{
	int* a1, n1, count1 = 0;
	int* a2, n2, count2 = 0;
	int* a3, n3;


	cout << "Please input a size of array a1\n";
	cin >> n1;
	a1 = new int[n1];

	cout << "\nPlease input elements of array a1\n";
	for (int i = 0; i < n1; i++)
	{
		cin >> a1[i];
		if (a1[i] > 0)
		{
			count1++;
		}
	}

	cout << "Please input a size of array a2\n";
	cin >> n2;
	a2 = new int[n2];

	cout << "\nPlease input elements of array a2\n";
	for (int i = 0; i < n2; i++)
	{
		cin >> a2[i];
		if (a2[i] > 0)
		{
			count2++;
		}
	}

	n3 = count1 + count2;
	a3 = new int[n3];

	int j = 0;

	for (int i = 0; i < n1; i++)
	{
		if (a1[i] > 0)
		{
			a3[j] = a1[i];
			j++;
		}
	}

	for (int i = 0, k = j - 1; i < n2; i++)
	{
		if (a2[i] > 0)
		{
			a3[k] = a2[i];
			k++;
		}
	}

	cout << "\nResult - array a3:\n";
	for (int i = 0; i < n3; i++)
	{
		cout << a3[i] << endl;
	}

	delete[] a1;
	delete[] a2;
	delete[] a3;

	return 0;
}