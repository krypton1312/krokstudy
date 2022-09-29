#include <iostream>
#include <math.h>

using namespace std;
char op; //операція
int x, y; //числа
int rezult;
//ввести числа та символ операції

int main() {
	cout << "Input 2 numbers: "; cin >> y >> x;
	cout << "Input an operation symbol ( +, -, /, *):" << endl; cin >> op;
		switch(op)
		{
		case ('-'):
			rezult = y - x;
			cout << rezult;
			break;
		case ('+'):
			rezult = y + x;
			cout << rezult;
			break;
		case ('*'):
			rezult = y * x;
			cout << rezult;
			break;
		case ('/'):
			rezult = y / x;
			cout << rezult;
			break;
		}
	return 0;
}