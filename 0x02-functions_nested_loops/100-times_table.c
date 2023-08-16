#include "main.h"

/**
 * print_times_table - prints times table of n
 *
 * @n: An input integer value
 */
void print_times_table(int n)
{
	int num, mult, k;

	if (n > 0 && n < 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (num = 0; num <= n; num++)
			{
				_putchar(',');
				_putchar(' ');

				k = num * mult;

				if (k <= 9)
					_putchar(' ');
				if (k <= 99)
					_putchar(' ');

				if (k >= 100)
				{
					_putchar((k / 100) + 48);
					_putchar((k / 10) % 10 + 48);
				}
				else if (k <= 99 && k >= 10)
					_putchar((k / 100) + 48);
				_putchar((k / 10) % 10 + 48);
			}
			_putchar('\n');
		}
	}
}
