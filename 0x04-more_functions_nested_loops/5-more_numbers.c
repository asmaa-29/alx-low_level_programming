#include "main.h"

/**
 * more_numbers - print 0 - 14 ten time
 *
 * Return: Always 0 (sccess)
 */

void more_numbers(void)
{
	int i, j, k;
	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar('1' + 48);
				k = j % 10;
			}
			_putchar(i + 48);
		}
		_putchar('\n');
	}
}
