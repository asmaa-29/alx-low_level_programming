#include "main.h"
/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first input unsigned long
 * @m: second input unsigned long
 * Return: how many bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int count = 0;

	while (flipped)
	{
		if (flipped & 1)
			count++;
		flipped >>= 1;
	}
	return (count);
}
