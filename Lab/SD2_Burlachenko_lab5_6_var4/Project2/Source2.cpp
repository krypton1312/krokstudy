#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	int* arr;
	int n, i, sum;

	cout << "Please input an array's size n=" << endl;
	cin >> n;

	arr = new int[n];
	srand((unsigned)time(NULL));

	for (i = 0; i < n; i++)
	{
		arr[i] = -78 + rand() % (109 + 78 + 1);
		cout << setw(4) << arr[i];
	}
	int min = INT_MAX;

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] <= min)
		{
			min = arr[i];
		}
	}

	cout << "\n\n\nMin: " << min << endl;

}