#include "main.h"

/**
 * times_Table - prints the 9 times table
 * Example Table
 * 0, 0, 0, ..
 * 0, 1, 2, ..
*/

void times_table(void)
{
	int num, mult, n;

	for (num = 0; num <= 9; num++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			n = num * mult;

			if ((n / 10) == 0)
			{
				if (mult != 0)
					_putchar(' ');
				_putchar(n + '0');

				if (mult == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				if (mult == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
