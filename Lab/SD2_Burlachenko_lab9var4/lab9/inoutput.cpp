#include <iostream>
#include <ctime>
#include <iomanip>
#include "students.h" 

using namespace std;

int InputStudents(STUDENT* students)
{
	string name;
	int i = 0;
	do {
		cout << "Прізвище: \n";

		cin.ignore();
		getline(cin, name);
		if (name != STOP)
		{
			students[i].name = name;
			cout << "Оценка по математике: \n";			cin >> students[i].MathMark;
			cout << "Оценка по истории: \n";			cin >> students[i].HistoryMark;
			cout << "Оценка по програмированию: \n";	cin >> students[i].ProgrammingMark;
			i++;
		}
	} while (name != STOP);

	return i;
}

void OutputStudents(STUDENT* students, int n)
{
	for (int i = 0; i < n; i++)
	{
		int averagemark = (students[i].MathMark + students[i].HistoryMark + students[i].ProgrammingMark) / 3;
		if (averagemark >= 4) {
			cout << setw(2) << students[i].name << setw(15) << students[i].MathMark << setw(4) << students[i].HistoryMark << setw(4) << students[i].ProgrammingMark << setw(4) << averagemark << endl;
		}
	}
}