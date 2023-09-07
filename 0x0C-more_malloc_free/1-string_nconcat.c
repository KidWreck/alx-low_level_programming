#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - conct s2 into s1
 * @s1: first string
 * @s2: second string
 * @n: number of chars to take from s2
 * Return: a or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	int i, j, len1, len2;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	for (len1 = 0 ; s1[len1] != '\0' ; len1++)
		;
	for (len2 = 0 ; s2[len2] != '\0' ; len2++)
		;

	a = malloc(len1 + n + 1);
	if (a == NULL)
		return (NULL);

	for (i = 0 ; s1[i] != '\0' ; i++)
		a[i] = s1[i];
	for (j = 0 ; j < n ; j++)
	{
		a[i] = s2[j];
		i++;
	}
	a[i] = '\0';

	return (a);
}
