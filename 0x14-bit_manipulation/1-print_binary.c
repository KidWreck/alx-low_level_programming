#include "main.h"

/**
 * print_binary - convert to binary
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int x = sizeof(n) * 8, i = 0;

	while (x)
	{
		if (n & 1L << --x)
		{
			_putchar('1');
			i++;
		}
		else if (i)
			_putchar('0');
	}
	if (!i)
		_putchar('0');
}
