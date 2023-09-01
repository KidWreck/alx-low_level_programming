#include "main.h"

/**
 * _strspn - show in what index char first shown
 * @s: pointer
 * @accept: char
 * Return: index number
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != s[i] ; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
