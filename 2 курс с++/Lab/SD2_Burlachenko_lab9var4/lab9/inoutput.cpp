#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#include <fstream>
#include "students.h" 

using namespace std;

int InputStudents()
{
	STUDENT student;
	string name;
	int i = 0;
	string path = "myfile.txt";
	ofstream fout;

	fout.open(path);
	do {
		cout << "ѕр≥звище: \n";


		cin.ignore();
		getline(cin, name);
		if (name != STOP)
		{
			student.name = name;
			cout << "ќценка по математике: \n";
			cin >> student.MathMark;
			//fout << "ќценка по математике: " << student.MathMark << "\n";
			cout << "ќценка по истории:  \n" ;
			cin >> student.HistoryMark;
			//fout << "ќценка по истории: " << student.HistoryMark << " \n";
			cout << "ќценка по програмированию: \n";
			cin >> student.ProgrammingMark;
			//fout << "ќценка по програмированию: " << student.ProgrammingMark << "  \n";
			fout << student.name <<" "<< student.MathMark << " " << student.HistoryMark << " " << student.ProgrammingMark << endl;
		}
	} while (name != STOP);
	fout.close();
	return i;
}

void OutputStudents(int n)
{
	string path = "myfile.txt";
	ifstream fin;
	STUDENT student;
	fin.open(path);
	fin >> student.name >> student.MathMark >> student.HistoryMark >> student.ProgrammingMark;
	while (!fin.eof())
	{
		// int averagemark = (student.MathMark + student.HistoryMark + student.ProgrammingMark) / 3;
		// if (averagemark >= 4) {
			cout << setw(2) << student.name << setw(15) << student.MathMark << setw(4) << student.HistoryMark << setw(4) << student.ProgrammingMark << setw(4) << averagemark << endl;
			fin >> student.name >> student.MathMark >> student.HistoryMark >> student.ProgrammingMark;
		//}
	}
	fin.close();
}