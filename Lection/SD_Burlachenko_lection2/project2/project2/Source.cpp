#include <iostream>
using namespace std;
int a, b, �;

int main()
{
	setlocale(LC_CTYPE, "Ukrainian");
	cout << "������ ��� ����� \n";
	cin >> a >> b;
	int c = a + b;
	cout << "����= " << c;
	return 0;
}
