#include "main.h"

/**
 * print_square - print square of stars
 * @size: number of rows and colomn
 * Return: always 0
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
	for (x = 1 ; x <= size ; x++)
	{
		for (y = 1 ; y <= size ; y++)
			_putchar('#');
	_putchar('\n');
	}
	}
}
