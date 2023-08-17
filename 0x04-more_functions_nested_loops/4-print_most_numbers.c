#include "main.h"

/**
 * print_numbers - print 0 - 9 (without 2 & 4)
 * Return: always 0
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0 ; x <= 9 ; x++)
	{
		if (x == 2 || x == 4)
			continue;
		_putchar(x + 48);
	}
	_putchar('\n');
}
