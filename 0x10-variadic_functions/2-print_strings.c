#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: String to be printed between strings
 * @n: number of variadic arguments
 * @...: Arguments Variadic
 *
 * Return: No return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	for (i = 0; i < n - 1; i++)
	{
		str = va_arg(list, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator)
			printf("%s", separator);
	}
	str = va_arg(list, char *);
	if (str)
		printf("%s\n", str);
	else
		printf("(nil)\n");
	va_end(list);
}
