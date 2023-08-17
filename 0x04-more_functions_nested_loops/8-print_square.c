#include "main.h"

/**
 * print_square - prints a square
 * @size: its the size of the square
 *
*/


void print_square(int size)
{
	int row, colum;

	for (row = 1; row <= size; row++)
	{
		for (colum = 0; colum <= size; colum++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
