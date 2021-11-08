#include <iostream>
#include <string>
using namespace std;

int main()
{
	char fullName[20];
	cout << "Enter your full name: ";

	cin.getline(fullName, 20); // <--------- Note

	cout << "Your name is: " << fullName << endl;

	getchar();

	return 0;
}
