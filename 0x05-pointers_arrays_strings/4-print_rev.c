#include "main.h"

/**
 * print_rev - print strings reverse
 * @s: pointer to string
 */

void print_rev(char *s)
{
	int n = 0;

	while (s[n])
		n++;
	while (n--)
		_putchar(s[n]);
	_putchar('\n');
}

