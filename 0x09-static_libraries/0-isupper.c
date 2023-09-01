#include "main.h"

/**
 * _isupper - check if c is upper
 * @c: input for alphabet
 *
 * Return: 0 or 1 if its uppercase
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
