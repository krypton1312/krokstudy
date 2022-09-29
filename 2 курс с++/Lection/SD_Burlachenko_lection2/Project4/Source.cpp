#include <iostream>

using namespace std;

int main()
{
	char c;
	setlocale(0, "ukr");
	cout << "¬вед≥ть символ => \n";
	cin >> c;

	if ((c >= 'a') && (c <= 'z'))
		cout << "так";
	else cout << "н≥";
	cout << endl;
}
