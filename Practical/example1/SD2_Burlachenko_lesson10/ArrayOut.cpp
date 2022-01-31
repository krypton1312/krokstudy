#include "student.h"
void ArrayOut(STUDENT* s, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << s[i].num << " " << s[i].name << " " << s[i].mark << endl;
	}
}