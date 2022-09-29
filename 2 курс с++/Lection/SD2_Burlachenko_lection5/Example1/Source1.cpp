#include <iostream>

using namespace std;

int main()
{
	const int N = 5;
	double a[N], s = 0;
	double* arrayEnd, * pa;
	arrayEnd = a + N;
	cout << "Input the elements\n";
	for (pa = a; pa < arrayEnd; pa++)
	{
		cin >> *pa;
		cout << endl;
	}
	for (pa = a; pa < arrayEnd; pa++)
		s += *pa;
	s /= N;
	cout << "\n s =" << s << endl;
}