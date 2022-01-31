#include "student.h"
int ArrayIn(STUDENT* s)
{
	int i = 0;
	cout << "Fill the next field, please:" << endl;
	do {
		cout << "Name:" << endl;
		cin >> (s + i)->name;
		if ((s + i)->name != STOP)
		{
			cout << "Number:" << endl;
			cin >> (s + i)->num;
			cout << "Mark:" << endl;
			cin >> (s + i)->mark;
			i++;
		}
	} while ((s + i)->name != STOP);
	return i;
}
