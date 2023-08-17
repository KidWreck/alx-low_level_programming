#include "main.h"

/**
 * print_line - print '_'
 * @n: number of '_'
 * Return: always 0
 */

void print_line(int n)
{
	int x;

	for (x = 1 ; x <= n ; x++)
		_putchar('_');
	_putchar('\n');
}
