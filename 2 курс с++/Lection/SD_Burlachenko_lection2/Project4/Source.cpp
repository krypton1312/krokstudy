#include <iostream>

using namespace std;

int main()
{
	char c;
	setlocale(0, "ukr");
	cout << "������ ������ => \n";
	cin >> c;

	if ((c >= 'a') && (c <= 'z'))
		cout << "���";
	else cout << "�";
	cout << endl;
}
