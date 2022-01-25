#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include "students.h"
int main()
{
	setlocale(LC_ALL, "Ukr");

	cout << "¬вед≥ть к≥льк≥сть студент≥в: \n";
	int n;
	cin >> n;
	STUDENT* students = new STUDENT[n]; // динам≥чний масив

	cout << "¬вед≥ть дан≥ студент≥в: \n";
	n = InputStudents(students);
	
	
	cout << "√рупа: \n";
	OutputStudents(students, n);
	cout << "\n\n";

	delete[] students;
	return 0;

}



