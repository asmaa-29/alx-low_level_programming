#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 * @n: number of bytes to be used.
 *
 * Return: pointer to destination string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a;
	
	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
