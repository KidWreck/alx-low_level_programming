#include "main.h"

/**
 * _strncat - dmg dest & src and save in dest
 * @dest: destination
 * @src: source
 * @n: number of chars
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c = 0, z;

	while (dest[c])
		c++;
	for (z = 0 ; z < n && src[z] != '\0' ; z++)
		dest[c + z] = src[z];
	dest[c + z] = '\0';

	return (dest);
}
