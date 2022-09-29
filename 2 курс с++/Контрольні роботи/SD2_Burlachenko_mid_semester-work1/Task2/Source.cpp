#include <iostream>
#include <ctime>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
	setlocale(0, "ukr");
	float AY1, AX1, BX1, BY1, CX1, CY1, AY2, AX2, BX2, BY2, CX2, CY2, AB1, BC1, CA1, AB2, BC2, CA2, P1, P2;
	cout << "������� ���������� ����� ������� ������������." << endl << "��������:" << "\nA(-3;-1)" << "\nB(2;4)" << "\nC(6;-2)" << endl << endl;
	cout << "�������� A: "; cin >> AX1;
	cout << "������� �: ";cin >> AY1;

	cout << "\n�������� B: "; cin >> BX1;
	cout << "������� B: "; cin >> BY1;
	
	cout << "\n�������� C: "; cin >> CX1;
	cout << "������� C: "; cin >> CY1;

	AB1 = sqrt((BX1 - AX1) * (BX1 - AX1) + (BY1 - AY1) * (BY1 - AY1));
	BC1 = sqrt((CX1 - BX1) * (CX1 - BX1) + (CY1 - BY1) * (CY1 - BY1));
	CA1 = sqrt((AX1 - CX1) * (AX1 - CX1) + (AY1 - CY1) * (AY1 - CY1));
	
	if (BC1 + CA1 > AB1 || AB1 + CA1 > BC1 || AB1 + BC1 > CA1)
	{
		cout << "\n\n������� ���������� ����� ������� ������������." << endl << "��������:" << "\nA(-5;-3)" << "\nB(0;2)" << "\nC(4;-4)" << endl << endl;
		cout << "\n�������� A: "; cin >> AX2;
		cout << "������� �: "; cin >> AY2;

		cout << "\n�������� B: "; cin >> BX2;
		cout << "������� B: "; cin >> BY2;

		cout << "\n�������� C: "; cin >> CX2;
		cout << "������� C: "; cin >> CY2;

		AB2 = sqrt((BX2 - AX2) * (BX2 - AX2) + (BY2 - AY2) * (BY2 - AY2));
		BC2 = sqrt((CX2 - BX2) * (CX2 - BX2) + (CY2 - BY2) * (CY2 - BY2));
		CA2 = sqrt((AX2 - CX2) * (AX2 - CX2) + (AY2 - CY2) * (AY2 - CY2));
		if (BC2 + CA2 > AB2 || AB2 + CA2 > BC2 || AB2 + BC2 > CA2)
		{
			P1 = AB1 + BC1 + CA1;
			P2 = AB2 + BC2 + CA2;
			if (P1 < P2)
			{
				cout << "\n\n�������� ������� ������������ ������.";
			}
			else if (P1=P2)
			{
				cout << "\n\n��������� ������������� �����.";
			}
			else
			{
				cout << "\n\n�������� ������� ������������ ������.";
			}
		}
		else
		{
			cout << "\n\n� ������ ��������� ����������� ������������ �� �����.";
		}
	}
	else
	{
		cout << "\n\n� ������ ��������� ����������� ������������ �� �����.";
	}
}