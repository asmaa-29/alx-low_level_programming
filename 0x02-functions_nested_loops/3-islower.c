#include"main.h"

/**
 * _islower - function to check if
 *       character is lowercase
 *
 * Return: return 1 if 'c' id lowecase other wise 0 (Success)
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
