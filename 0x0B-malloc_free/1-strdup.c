#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate to new location
 * @str: array of chars
 * Return: a or NULL
 */

char *_strdup(char *str)
{
	char *aaa;
	int i = 0, r = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	aaa = malloc(sizeof(char) * (i + 1));
	if (aaa == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		aaa[r] = str[r];
	return (aaa);
}
