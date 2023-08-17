#include "holberton.h"

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
		for (b = 0; b < 15; b++)
		{
			c = b;
			if (b > 9)
			{
				_putchar('1' + 48);
				c = b % 10;
			}
			_putchar(c + 48);
		}
		_putchar('\n');
	}
}
