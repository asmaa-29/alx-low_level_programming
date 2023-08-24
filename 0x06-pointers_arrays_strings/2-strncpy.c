#include "main.h"
/**
 * _strncpy - C function that copies a string
 *
 * @dest: pointer to destinstion input buffer
 * @src: pointer to source input buffer
 * @n: type of @src
 *
 * Return: returns
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
