#include "student.h"
int main()
{
	static STUDENT s[25];
	int count;
	cout << "Input array\n";
	count = ArrayIn(&s[0]);
	ArraySort(&s[0], count);
	cout << "Sorted array\n";
	ArrayOut(&s[0], count);
	return 0;
}