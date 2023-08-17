#include "main.h"

/**
 * more_numbers - print 0 - 14 ten time
 *
 * Return: Always 0 (sccess)
 */

void more_numbers(void)
{
	int a, b, c;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b < 14; b++)
		{
			c = b;
			if (b >= 10)
			{
				_putchar('1');
				_putchar(b % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
