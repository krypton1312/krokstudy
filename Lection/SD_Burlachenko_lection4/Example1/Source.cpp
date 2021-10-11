#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const int N = 10;
	static double a[N];
	int i;
	cout << "Input numbers" << endl;
	for (i = 0; i < N; i++)
	{
		cout << endl << " a["
			<< setw(2) << i << "] = ";
		cin >> a[i];
	}
	double s = 0;
	for (i = 0; i < N; i++)
		s += a[i];
	s /= N;
	cout << "\n s ="
		<< fixed << setw(10) << setprecision(6) << s;
	return 0;
}