#include <iostream>
#include <math.h>

using namespace std;
char op; //��������
int x, y; //�����
int rezult;
//������ ����� �� ������ ��������

int main() {
	cout << "Input 2 numbers: "; cin >> y >> x;
	cout << "Input an operation symbol ( +, -, /, *):" << endl; cin >> op;
		switch(op)
		{
		case ('-'):
			rezult = y - x;
			cout << rezult;
			break;
		case ('+'):
			rezult = y + x;
			cout << rezult;
			break;
		case ('*'):
			rezult = y * x;
			cout << rezult;
			break;
		case ('/'):
			rezult = y / x;
			cout << rezult;
			break;
		}
	return 0;
}