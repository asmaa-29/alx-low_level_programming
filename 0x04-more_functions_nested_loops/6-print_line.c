#include "main.h"

/**
 * print_line - printing a straght line
 * @n: number of times
 *
*/


void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
