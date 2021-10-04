#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	int f = 1;
	system("chcp 1251>nul");
	cout << "Print N: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
		cout << setw(4) << i << setw(6) << f << endl;
	}
}