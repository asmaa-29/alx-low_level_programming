#include <unistd.h>

/**
 * _putchar - write the characterncnto stdout
 * 
 * @c: the character to print
 *
 * Return: 1 (success) -1 on error
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
