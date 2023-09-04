#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array
 * @size: size of array
 * @c: array of chars
 * Return: a or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(size * sizeof(char));
	if (size == 0 || a == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		a[i] = c;
	return (a);
}
