#include "main.h"

/**
 * flip_bits - working woth XOR
 * @n: first num
 * @m: second num
 * Return: number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned long int i = 0;

	while (x)
	{
		if (x & 1L)
			i++;
		x = x >> 1;
	}
	return (i);
}
