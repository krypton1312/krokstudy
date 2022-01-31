#include "student.h"
void ArraySort(STUDENT* a, int n)
{
	STUDENT temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i].mark > a[j].mark)
			{
				temp = a[i]; a[i] = a[j]; a[j] = temp;
			}
		}
	}
}