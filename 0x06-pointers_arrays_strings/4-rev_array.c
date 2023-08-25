#include "main.h"

/**
*  reverse_array - function that reverse content of array
*  @a: array
*  @n: number of elements
*/

void reverse_array(int *a, int n)
{
	int temp, index;

	n = n - 1;
	index = 0;
	while (index <= n)
	{
		temp = a[index];
		a[index++] = a[n];
		a[n--] = temp;
	}
}
