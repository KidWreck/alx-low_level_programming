#include "main.h"

/**
 * _strcpy - copy pointer to pointer
 * @src: from
 * @dest: to
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	while (src[i] != 0)
	{
		i++;
		dest[i] = src[i];
	}
	return (dest);
}
