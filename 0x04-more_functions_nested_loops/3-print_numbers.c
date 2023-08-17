#include "main.h"

/**
 * print_numbers - print 0 - 9
 * Return: always 0
 */

void print_numbers(void)
{
	int x;

	for (x = 0 ; x <= 9 ; x++)
		_putchar(x + 48);
	_putchar('\n');
}
