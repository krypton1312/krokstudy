#include <iostream>

using namespace std;

int main1()
{
	char c, prev, next;
	setlocale(0, "ukr");
	cout << "������ ������ => \n";
	cin >> c;

	prev = c; next = c;
	cout << "��������� - " << --prev << "��� - " << (int)prev << "\n �������� - " << ++next << "��� - " << (int)next << endl;
}
