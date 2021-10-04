#include <iostream>
#include <ctime>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
	int a, b;
	for (a = 1, b = 0; a < 100; b += a, a++)
	{
		if (b % 2 == 1)
		{
			cout << setw(4) << a << setw(10) << b << endl;
		}

	}

}