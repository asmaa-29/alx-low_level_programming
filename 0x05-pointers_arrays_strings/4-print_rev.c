#include "main.h"

/**
 * print_rev - Prints reverse string
 *
 * @s: pointer to the string to print
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
