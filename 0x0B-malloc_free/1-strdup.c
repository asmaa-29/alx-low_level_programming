#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 *space in memory, which contains a copy of the
 *string given as a parameter.
 *@str:String to be copied
 *
 * Return: NULL in case of error, pointer to allocated
*/

char *_strdup(char *str)
{
	char *m;
	int i, l;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;
	m = malloc(sizeof(char) * (l + 1));

	if (m == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		m[i] = str[i];
	}

	m[l] = '\0';

	return (m);
}
