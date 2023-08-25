#include "main.h"

/**
 * print_number - Printsnumber chars
 *
 * @n1: integer paramers
 */
void print_number(int n1)
{
	unsigned int num = n1;

	if (n1 < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
