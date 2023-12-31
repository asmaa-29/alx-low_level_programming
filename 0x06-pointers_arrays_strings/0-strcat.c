#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 *
 * Return: pointer to destination string.
*/

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a])
	{
		a++;
	}
	for (b = 0; src[b]; b++)
	{
		dest[a++] = src[b];
	}
	return (dest);
}
