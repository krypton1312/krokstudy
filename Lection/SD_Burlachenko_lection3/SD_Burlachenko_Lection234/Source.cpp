#include <iostream>
using namespace std;
int main()
{
	int n;
	char c;
	setlocale(0, "ukr");
	puts("������ ����� - ?");
	c = getchar();
	cout << (int)c << endl;
	
	n = c - '0';
	n += 10;
	cout << "\n ���������: " << n << endl;
	return 0;
}