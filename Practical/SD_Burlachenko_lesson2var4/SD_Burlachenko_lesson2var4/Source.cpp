#include <iostream>
#include <math.h>

using namespace std;
char op; //операція
int x, y; //числа
int rezult;
//ввести числа та символ операції

int main() {
	cout << "Input 2 numbers: "; cin >> y >> x;
	cout << "Input an operation symbol ( +, -, /, *)"; cin >> op;
	;	if (op == '-')
	{
		rezult = y - x;
		cout << rezult;
	}
	else
	{
		if (op == '+')
		{
			rezult = y + x;
			cout << rezult;
		}
		else
		{
			if (op == '*')
			{
				rezult = y * x;
				cout << rezult;
			}
			else
			{
				if (op == '/')
				{
					rezult = y / x;
					cout << rezult;
				}
				else
				{
					cout << "Ошибка" << endl;
				}
			}
		}
	}
	return 0;
}