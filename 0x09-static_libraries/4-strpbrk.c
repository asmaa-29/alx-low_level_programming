#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 *
 * @s: string
 * @accept: string to locate
 *
 * Return: pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int index, count;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (count = 0; accept[count] != '\0'; count++)
		{
			if (accept[count] == s[index])
			{
				return (&s[index]);
			}
		}
	}
	return (0);
}
