#include <iostream>
#include <string>
#define STOP "*"
using namespace std;
struct STUDENT
{
	int num;
	string name;
	int mark;
};
int ArrayIn(STUDENT*);
void ArrayOut(STUDENT*, int);
void ArraySort(STUDENT*, int);