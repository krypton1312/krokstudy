#include <iostream>
using namespace std;
int main()
{
	int number;
	int remainder1, remainder2;
	setlocale(0, "ukr");
	cout << "Please enter an integer:\n";
	cin >> number;
	remainder1 = number % 100;
	if (10 < remainder1 && remainder1 < 20)
	{
		cout << number << " ������";
	}
	else
	{
		remainder2 = number % 10;
		if (remainder2 == 1)
		{
			cout << number << " ������";
		}
		else
		{
			if ((remainder2 == 2) || (remainder2 == 3) || (remainder2 == 5))
			cout << number << " �����";
			else
				cout << number << " ������";
		}
	}
	return 0;
}