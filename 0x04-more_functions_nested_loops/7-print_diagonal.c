#include "main.h"
/**
 * print_diagonal - print \
 * @n: number of \
*/
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 1 ; x <= n ; x++)
		{
			for (y = 1 ; y <= x ; y++)
				_putchar(' ');
			_puttchar('/');
			_putchar('\n');
		}
	}
}
