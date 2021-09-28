#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "введ.номер\n";
	cin >> n;
	switch (n)
	{
	case 12: cout << "грудень"; break;
	case 1: cout << "січень"; break;
	case 2: cout << "лютий"; break;
	default: cout << "помилка";
	}
	return 0;
}