#include "main.h"

/**
 * _strcat - dmg dest & src and save in dest
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int c = 0, z;

	while (dest[c])
		c++;
	for (z = 0 ; src[z] ; z++)
	{
		dest[c] = src[z];
		c++;
	}

	return (dest);
}
