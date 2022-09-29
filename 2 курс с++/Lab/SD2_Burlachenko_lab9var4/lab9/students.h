#include <iostream>
#include <string>

using namespace std;

struct STUDENT
{
	string name;
	int MathMark;
	int HistoryMark;
	int ProgrammingMark;
};
const string STOP = "*";

int InputStudents();
void OutputStudents();