#include <iostream>
#include <ctime>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {
	int amount;
	cout << "Please enter the amount you invested: " << endl;
	cin >> amount;
	int percentage;
	cout << "at what percentage did you invest " << endl;
	cin >> percentage;
	int age;
	cout << "When did invested {example 2002}: " << endl;
	cin >> age;

	int total = amount * 2;
	for (int i = 0; amount <= total; i++)
	{
		age++;
		amount += (amount / 100) * percentage;
		cout << setw(4) << age << setw(30) << amount << endl;
	}




}