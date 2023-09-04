#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concat to strings
 * @s1: first string
 * @s2: second string
 * Return: a or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, c;
	char *a;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	i = c = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[c] != '\0')
		c++;
	a = malloc((i + c) * sizeof(char) + 1);
	if (a == NULL)
		return (NULL);

	i = c = 0;
	while (s1[i] != '\0')
	{
		a[i] = s1[i];
		i++;
	}
	while (s2[c] != '\0')
	{
		a[i] = s2[c];
		i++, c++;
	}
	return (a);
}
