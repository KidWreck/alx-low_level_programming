#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate to new location
 * @str: array of chars
 * Return: a or NULL
 */

char *_strdup(char *str)
{
	int i, size;
	char *a;

	if (str == NULL)
		return (NULL);

	for (size = 0 ; size != '\0' ; size++)
		;

	a = malloc(size * sizeof(*str) + 1);

	if (a == 0)
	{
		return (NULL);
	}
	else
	{
	for (i = 0 ; i < size ; i++)
		a[i] = str[i];
	}
	return (a);
}
