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
		mas[i] = rand() % 50;
		cout << "mas[" << i << "]=" << mas[i] << endl;
	}
	delete [] mas;
	// cout << "mas[" << i-1 << "]=" << mas[i-1] << endl;
	return 0;
}
