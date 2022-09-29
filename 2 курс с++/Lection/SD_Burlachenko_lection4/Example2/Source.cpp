#include <iostream>
#include <iomanip>
using namespace std;
const int N = 6;
int main()
{
	static char str[N];
	int i;
	int found = 0;
	cout << "\nInput symbols, please\n";
		for (i = 0; i < N; i++)
			cin >> str[i];
	cout << "\nThe inputed symbols\n";
	for (i = 0; i < N; i++)
		cout << str[i];
	i = 0;
	while ((i < N) && (!found))
	{
		found = str[i] == 'a';
		i++;
	}
	if (found)
		printf("\n номер = %d \n", i);
	else puts("\n не знайдено \n");
	system("pause");
	return 0;
}
