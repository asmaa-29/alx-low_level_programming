#include "main.h"

/**
 * print_diagonal - printing a diagonal line
 * @n: number of time
 *
*/


void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 0; b <= a; b++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
