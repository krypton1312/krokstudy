#include <iostream>
using namespace std;

int main()
{
	int i(0);  //i=0
	int ascii_code(0); //ascii_code =0 - ASCII -код символа

	char s[] = "Hello World";
	cout << s << endl;

	while (s[i] != '\0')
	{
		ascii_code = (int)s[i];
		if ((int)'a' <= ascii_code && ascii_code <= (int)'z')
		{
			ascii_code -= 32;
		}
		cout << (char)ascii_code;
		i++;
	}
	cout << endl;

	return 0;
}
