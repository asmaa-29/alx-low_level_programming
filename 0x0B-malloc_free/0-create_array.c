#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: char for initialized the array.
 *
 * Return: the string initialized.
 */
char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i;

	if (size == 0)
		return (NULL);
	n = malloc(size * sizeof(char));
	if (n == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(n + i) = c;
	return (n);
}
