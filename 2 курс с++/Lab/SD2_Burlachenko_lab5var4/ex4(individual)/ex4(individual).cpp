#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));

	int n;
	cin >> n;
	int* mas = new int[n];
	int i = 0;
	for (i; i < n; i++) {
		mas[i] = rand() % (120 + 120 + 1) - 120;
		cout << "mas[" << i << "]=" << mas[i] << endl;
	}
	int penult = mas[n - 2];
	cout << "the penult element is mas[ " << n - 2 << "] = " << penult << endl;
	delete[] mas;
	return 0;
}
