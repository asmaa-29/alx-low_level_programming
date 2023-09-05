#include "main.h"

/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*
*Return: NULL in case of failure , but pointer to new string in
*/
char *str_concat(char *s1, char *s2)
{
	char *m;
	int i, j = 0,  l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		l++;

	m = malloc(sizeof(char) * l);

	if (m == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		m[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		m[j++] = s2[i];

	return (m);
}
