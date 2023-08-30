##include "main.h"

/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @n: int
 * @val: number that iterates from 1 to n
 * Return: On success 1 or -1 on error
*/
int sqrt2(int n, int vat)
{
	if (vat * vat == n)
		return (vat);
	else if (vat * vat > n)
		return (-1);
	return (sqrt2(n, vat + 1));
}
/**
 * _sqrt_recursion - find natural square root
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
