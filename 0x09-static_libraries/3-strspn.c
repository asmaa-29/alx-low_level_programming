#include "main.h"
/**
 * _strspn - prints the consecutive caracters of s1 that are in s2
 * @s: string
 * @accept: bytes
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int itr, jtr;

	for (jtr = 0; *(s + jtr); jtr++)
	{
		for (itr = 0; *(accept + itr); itr++)
		{
			if (*(s + jtr) == *(accept + itr))
				break;
		}
	if (*(accept + itr) == '\0')
		break;
	}
	return (jtr);
}
