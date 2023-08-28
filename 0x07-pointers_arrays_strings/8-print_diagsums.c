#include "main.h"
#include <stdio.h>

/**
*   print_diagsums - print sums of diagonals in matrix
*    @a: matrix
*     @size: size of matrix
*/

void print_diagsums(int *a, int size)
{
	int s1 = 0;
	int s2 = 0;
	int itr, i;

	for (itr = 0; itr < size; itr++)
	{
		i = (itr * size) + itr;
		s1 += a[i];
	}
	for (itr = 1; itr <= size; itr++)
	{
		i = (itr * size) - itr;
		s2 += a[i];
	}
	printf("%d, %d\n", s1, s2);

}
