#include "main.h"

/**
 * _strcpy - copy pointer to pointer
 * @src: from
 * @dest: to
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, x;

	while (*(src + i) != '\0')
		i++;
	for (x = 0 ; x < i ; x++)
		dest[x] = src[x];
	dest[i] = '\0';
	return (dest);
}
