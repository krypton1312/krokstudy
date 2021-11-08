#include <iostream>

using namespace std;

int main()
{
	char s[] = "Hello World";
	cout << s << endl;
	for (int i = 0; i < sizeof(s); i++)
		cout << s[i] << ",";
	cout << endl;
	cout << endl;
	for (int i = 0; i < sizeof(s); i++)
		cout << (int)s[i] << ",";
	return 0;
}
