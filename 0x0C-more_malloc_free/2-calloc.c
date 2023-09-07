#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills momery with const byte
 * @s: memory area
 * @b: char to copy
 * @n: number of times to copy
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}

/**
 * _calloc - allocate memory for array
 * @nmemb: number of elements
 * @size: size of each element
 * Return: a or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);

	if (a == NULL)
		return (NULL);
	_memset(a, 0, nmemb * size);

	return (a);
}
