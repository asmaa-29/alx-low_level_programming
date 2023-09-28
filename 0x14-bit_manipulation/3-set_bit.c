#include "main.h"
/**
 * set_bit - Sets value of bit to 1
 *
 * @n: long int
 *
 * @index: unsigned int
 *
 * Return: 1 if works -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n |= (1 << index);
	return (1);
}
