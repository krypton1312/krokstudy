#include <iostream>
using namespace std;
int main()
{
	int d, t, k;
	setlocale(0, "ukr");
	cout << "¬ведiть k \n";
	cin >> k;
	d = k % 7; t = k / 7 + 1;
	if (d == 0) { d = 7; t--; }
	cout << "ƒень " << d << " “иждень " << t << "\n";
}