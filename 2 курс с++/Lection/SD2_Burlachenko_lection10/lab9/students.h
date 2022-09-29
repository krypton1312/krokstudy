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

int InputStudents(STUDENT*);
void OutputStudents(STUDENT*, int);