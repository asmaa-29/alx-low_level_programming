#include "main.h"
/**
 * _strncat - function that concatenates two strings
 *
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to be concatenated
 * Return: pointer to destination string
*/
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
