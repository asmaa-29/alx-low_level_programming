#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: string input
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int counter

	for (counter = 0; s[counter] != '\0'; counter++)
		++counter;

	return (counter);
}
