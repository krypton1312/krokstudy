#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	int* arr;
	int n, i, sum;
	int a = -1, b = 0;

	cout << "Please input an array's size n=" << endl;
	cin >> n;

	arr = new int[n];
	srand( (unsigned) time(NULL));

	for (i = 0; i < n; i++)
	{
		arr[i] = a + rand() % (b - a + 1);
		cout << setw(4) << arr[i];
	}

	bool prap = false;
	i = 0;

	while (i < n && !prap)
	{
		if (arr[i] < 0)
		{
			prap = true;
		}
		i++;
	}

	cout << "\n\n prap=" << prap << " First negative element =" << arr[i-1] << endl;	
	if (prap)
	{
		sum = 0;
		for (i = 0; i < n; i++)
		{
			if (arr[i] < 0)
			{
				sum += arr[i];
			}
		}
		cout << "\n\n The sum of negative elements is = "<<sum<<endl;
	}
	else
	{
		cout << "\n\n A negative element is not in the array\n";
	}
	delete[] arr;
	return 0;
}
