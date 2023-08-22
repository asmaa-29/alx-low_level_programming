#include "main.h"

/**
 * _strcpy - Copies the string pointed to by @src
 * @dest: char type string
 * @src: char type string
 *
 * Return: pointer to 'dest'
 */

char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
