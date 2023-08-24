#include "main.h"

/**
*  reverse_array - function that reverse content of array
*  @a: array
*  @n: number of elements
*/

void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0; j = (n - 1); i < j)
		i++;
	{
	       k = a[i];
	       a[i] = a[j];
	       a[j] = k;
	}
}
