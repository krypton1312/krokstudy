#include <iostream>
using namespace std;

int main() {
	int k;
	cout << "Position: ";
	cin >> k;
	if (k % 2) cout << k / 20 + 1 << endl;
	else cout << (k / 2 - 1) % 10 << endl;
}