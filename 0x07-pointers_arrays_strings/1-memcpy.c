#include "main.h"
/**
* char *_memcpy - copies n bytes from memory area src to memory area dest
*
*@dest: destination
*@src: source
*@n: number of bytes
*
*Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
