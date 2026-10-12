#include "sort.h"

void sort(int *a, int *b)
{
	if (*a < *b)
	{
		int temp = 0;

		temp = *b;
		*b = *a;
		*a = temp;

	}
}