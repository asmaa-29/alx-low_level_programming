#include "main.h"

/**
 * _isdigit - checks if digit between 0 - 9
 * @c: input
 *
 * Return: 0 or 1 if its digit
 */


int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
