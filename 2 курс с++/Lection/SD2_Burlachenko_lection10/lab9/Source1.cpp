#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include "students.h"
int main()
{
	setlocale(LC_ALL, "Ukr");

	cout << "������ ������� ��������: \n";
	int n;
	cin >> n;
	STUDENT* students = new STUDENT[n]; // ��������� �����

	cout << "������ ��� ��������: \n";
	n = InputStudents(students);
	
	
	cout << "�����: \n";
	OutputStudents(students, n);
	cout << "\n\n";

	delete[] students;
	return 0;

}



