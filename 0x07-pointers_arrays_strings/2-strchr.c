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
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
