#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: first input parameter
 * @b: second input parameter
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	 c = *a;
	*a = *b;
	*b = c;
}
