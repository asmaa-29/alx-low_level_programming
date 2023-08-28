#include "main.h"

/**
 * _strchr - fills the memory with constant byte
 *
 * @s: pointer to put the constant
 * @c: constant
 *
 * Return: pointer s
 */
char *_strchr(char *s, char c);
{
	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
