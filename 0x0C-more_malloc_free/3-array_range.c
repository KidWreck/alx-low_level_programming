#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of int
 * @min: minimum
 * @max: maximum
 * Return: a or NULL
 */

int *array_range(int min, int max)
{
	int i, len;
	int *x;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	a = malloc(sizeof(int) * len);
	if (a == NULL)
		return (NULL);
	for (i = 0 ; min <= max ; i++)
		a[i] = min++;

	return (a);
}
