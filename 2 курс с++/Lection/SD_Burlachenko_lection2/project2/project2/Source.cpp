#include <iostream>
using namespace std;
int a, b, с;

int main()
{
	setlocale(LC_CTYPE, "Ukrainian");
	cout << "¬вед≥ть два числа \n";
	cin >> a >> b;
	int c = a + b;
	cout << "—ума= " << c;
	return 0;
}
