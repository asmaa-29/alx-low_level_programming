#include "main.h"

/**
 * print_numbers - prints 0 - 9
 *
 * Return: void
 */


void print_numbers(void)
{
	int a = 0;

	do {
		_putchar(a + 48);
		a++;
	} while (a >= '0' && a <= '9');
	_putchar('\n');
}
