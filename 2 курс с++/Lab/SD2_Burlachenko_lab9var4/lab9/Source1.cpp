#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <fstream>
#include "students.h"
int main()
{
	setlocale(LC_ALL, "Ukr");

	cout << "������ ������� ��������: \n";
	int n;
	cin >> n;
	STUDENT* students = new STUDENT[n]; // ��������� �����

	cout << "������ ��� ��������: \n";
	n = InputStudents();
	
	string path = "myfile.txt";
	ofstream fout;
	fout.open(path);
	fout << "�����: \n";
	OutputStudents();
	fout << "\n\n";

	delete[] students;
	fout.close();
	return 0;

}



