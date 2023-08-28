#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string
 * @s: pointer where to find
 * @accept: pointer what to find
 * Return: s minus accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (0);
}
