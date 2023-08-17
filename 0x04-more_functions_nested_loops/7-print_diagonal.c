#include "main.h"

/**
 * print_diagonal - print '\'
 * @n: number of '\'
 * Return: always 0
 */

void print_diagonal(int n);
{
	int x, y;

	for (x = 1 ; x <= n ; x++)
	{
		for (y = 1 ; y <= x ; y++)
			_putchar(' ');
	_putchar(92);
	}
	_putchar('\n');
}
