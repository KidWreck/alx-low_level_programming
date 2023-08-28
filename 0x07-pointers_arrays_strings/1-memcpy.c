#include "main.h"

/**
 * _memcpy - copy from src to dest
 * @src: from
 * @dest: to
 * @n: number of chars to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];

	return (dest);
}
