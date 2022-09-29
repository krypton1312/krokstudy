#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <fstream>
#include "students.h"
int main()
{
	setlocale(LC_ALL, "Ukr");

	cout << "¬вед≥ть к≥льк≥сть студент≥в: \n";
	int n;
	cin >> n;
	STUDENT* students = new STUDENT[n]; // динам≥чний масив

	cout << "¬вед≥ть дан≥ студент≥в: \n";
	n = InputStudents();
	
	string path = "myfile.txt";
	ofstream fout;
	fout.open(path);
	fout << "√рупа: \n";
	OutputStudents();
	fout << "\n\n";

	delete[] students;
	fout.close();
	return 0;

}



