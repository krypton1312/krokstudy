#include <iostream>
#include <math.h>

using namespace std;
char op; //��������
int x, y; //�����
int rezult;
//������ ����� �� ������ ��������

int main() {
	cout << "Input 2 numbers: "; cin >> y >> x;
	cout << "Input an operation symbol ( +, -, /, *)"; cin >> op;
	;	if (op == '-')
	{
		rezult = y - x;
		cout << rezult;
	}
	else
	{
		if (op == '+')
		{
			rezult = y + x;
			cout << rezult;
		}
		else
		{
			if (op == '*')
			{
				rezult = y * x;
				cout << rezult;
			}
			else
			{
				if (op == '/')
				{
					rezult = y / x;
					cout << rezult;
				}
				else
				{
					cout << "������" << endl;
				}
			}
		}
	}
	return 0;
}