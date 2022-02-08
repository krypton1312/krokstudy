#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");

	int arr[20];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % (10 + 10 + 1) - 10;
		cout << "arr[" << i + 1 << "]" << " = " << arr[i] << endl;
	}
	cout << endl << endl;
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 1)
			cout << "arr[" << i + 1 << "]" << " = " << arr[i] << endl;
	}
	getchar();
}