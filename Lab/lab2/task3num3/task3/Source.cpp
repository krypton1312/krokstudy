#include <iostream>
using namespace std;

int main() {
	int k;
	cout << "Enter of number's position: ";
	cin >> k;
	if (k % 2) cout << k / 20 + 1 << endl;
	else cout << (k / 2 - 1) % 10 << endl;
}