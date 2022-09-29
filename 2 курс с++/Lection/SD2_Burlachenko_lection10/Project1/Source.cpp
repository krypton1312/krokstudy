#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukr");
	cout << "������ ����� ������: \n";
	int n; // ������� ������
	cin >> n;
	int* a = new int[n]; // ����������� ��������� �����

	srand((unsigned)time(NULL));

	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100; // ��������� �����
		cout << setw(2) << a[i] << " ";
	}
	cout << "\n\n";

	for (int i = 0, temp, m = n - 1; i < m; i++)
	{
		for (int j = 1; j < n - i; j++)
		{
			if (a[j - 1] > a[j])
			{
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << "������������� �����: \n";
	for (int i = 0; i < n; i++)
	{
		cout << setw(2) << a[i] << " ";
	}
	cout << "\n\n";
	delete[] a;
	return 0;
}
