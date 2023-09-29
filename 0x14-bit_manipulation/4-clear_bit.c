#include "main.h"

/**
 * clear_bit - set bit at index with 0
 * @n: pointer
 * @index: index
 * Return: -1 if fail , 1 if else
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
