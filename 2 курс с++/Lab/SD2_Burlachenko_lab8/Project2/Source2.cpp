#include <ctime>
#include <iostream>
using namespace std;

// ������� ������������� ���������� �������������� ����� � ��������� ��������.
// �������� �����: [min, max]
int GetRandomNumber(int min, int max)
{
	// ���������� ��������� ��������� �����
	srand(time(NULL));
	// ��������� ���������
	cin >> min;
	cin >> max;
	// �������� ��������� ����� - �������
	int num = min + rand() % (max - min + 1);

	return num;
}

void main()
{
	// ������������� ������� GetRandomNumber()
	int number;
	number = GetRandomNumber(-10, 10); // �������� �����: [-10, 10]
	cout << "number = " << number << endl;;
}