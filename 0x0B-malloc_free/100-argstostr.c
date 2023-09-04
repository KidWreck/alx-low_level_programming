#include "main.h"
#include <stdlib.h>

/**
 * argstostr - print word at each line
 * @ac: counter
 * @av: value
 * Return: a or NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, r = 0, l = 0;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
			l++;
	}
	l += ac;

	a = malloc(l + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
		{
			a[r] = av[i][j];
			r++;
		}
		if (a[r] == '\0')
			a[r++] = '\n';
	}
	return (a);
}
