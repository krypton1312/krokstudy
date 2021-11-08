#include <iostream>
using namespace std;
int main()
{
	char s[] = "Hello World";
	char  t[100];

	char* dt;
	char* st;

	st = s;  // s - &s[0]
	dt = t;

	cout << endl << st;
	char* beg = dt;

	while (*st != '\0')
	{
		*dt++ = *st++;
	}
	*dt = 0;

	cout << endl << beg << endl;

	return 0;
}
