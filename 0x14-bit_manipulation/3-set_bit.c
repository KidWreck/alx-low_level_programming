#include "main.h"

/**
 * set_bit - set bit at index with 1
 * @n: pointer
 * @index: index
 * Return: -1 if fail , 1 if else
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
