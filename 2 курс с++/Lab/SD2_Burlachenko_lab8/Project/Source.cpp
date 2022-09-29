#include <iostream>

using namespace std;

int nsd(int, int);
int main()
{
	cout << nsd(24, 16);
	cout << nsd(99, 108);
	return 0;
}
int nsd(int a, int b)
{
	while (a != b)
	{
		if (a > b) a = a - b;
		else b = b - a;
	}
	return(a);
}