#include "main.h"

/**
 * print_most_numbers - print 0 - 9
 *
 * Return: Always 0 (success)
 */


void print_most_numbers(void)
{
	char num;

	for (num = 0; num <= 9; num++)
	{
		if (!(num == 2 || num == 4))
			_putchar(num);
	}
	_putchar('\n');
}
