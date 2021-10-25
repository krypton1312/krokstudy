
#include <iostream>
using namespace std;
int main() {
	const int N = 5;
	double a[N], s, * end, * pi;
	cout << "Elements:\n";
		for (int i = 0; i < N; i++) {
			cout << "a[" << i << "]=";
			cin >> a[i];
		}
	cout << "\n";
	for (s = 0, pi = a, end = a + N; pi < end; pi++) {
		s += *pi;
		cout << "pi=" << pi << " *pi=" << *pi << " s=" << s << endl;
	}
	cout << "Average =" << s / N << endl;
	system("pause");
	return 0;
}