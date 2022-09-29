#include <iostream>
using namespace std;

int main()
{
	int i;
	char s[] = "Hello World";
	cout << s << endl;
	i = 0;
	while (s[i] != '\0')
	{
		cout << s[i] << ",";
		i++;
	}
	cout << endl;

	return 0;
}
