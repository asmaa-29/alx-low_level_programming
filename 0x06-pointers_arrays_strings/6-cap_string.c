#include "main.h"

/**
 * cap_string - capitalizes all word of a string
 *
 * @s: input string
 *
 * Return: dtring with capitalized word
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (islower(*s) && foundDlimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
