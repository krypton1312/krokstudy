#include <iostream>
#include <Windows.h> // ���� Windows.h ������� ��� ���������� ���������
//�� �������� ��� ������� � ������
#include <conio.h>
#include <iomanip>

using namespace std;
int main()
{
	int i;
	int n;
	double x, S;
	SetConsoleCP(1251); // ������������ ��������� Windows-1251
	// � ���� �������� ��� ���������� ��������
	// ��� ������� � ������)
	SetConsoleOutputCP(1251);
	S = 0;
	cout << "������ n=";
	cin >> n;
	for (i = 1; i <= n; i+=2)
	{
		S = S + i;
		cout << setw(4) << i << setw(6) << S << endl;
	}
	cout << "���� S=" << S << endl;
	_getch();
	return 0;
}