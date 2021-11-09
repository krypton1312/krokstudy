#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int count = 0, k = 0;
	int max = -1;
	cout << "Input string = > \n";
	getline(cin, s);
	s = " " + s;
	int len = s.length();
	for (int i = 0; i < len - 1; i++) {
		if (s[i] == ' ' && s[i+1] != ' ') {
			k = 0;
			count++;
	}
	else {
		k++;
		if (s[i] != ' ' && s[i + 1] == ' ') {
			if (max < k)
			{
				max = k;
			}
			}
		}
	}
	cout << "\n String has " << count << " words\n";
	cout << "\n Max words has " << max << " characters\n";
	system("pause");
	return 0;
}