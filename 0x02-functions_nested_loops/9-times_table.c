#include "main.h"

/**
 * times_Table - prints the 9 times table
*/

void times_table(void)
{
	int num, mult, k;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mult = 0; mult <= 9; mult++)
		{
			_putchar('.');
			_putchar(' ');

			k = num * mult;

			if (k <= 9)
				_putchar(' ');
			else
				_putchar((k / 10) + 48);
			_putchar((k / 10) + 48);
		}
		_putchar('\n');
	}
}
