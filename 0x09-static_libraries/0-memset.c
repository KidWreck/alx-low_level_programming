#include "main.h"

/**
 * _memset - fill a block with a char
 * @s: address of a memory to be filled
 * @b: the char
 * @n: numbers of byte tp change
 * Return: the new char "s"
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; n > 0 ; i++, n--)
		s[i] = b;

	return (s);
}
