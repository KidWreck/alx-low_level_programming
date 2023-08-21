#include "main.h"

/**
 * _strlen - count the lenghth
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int n;

	for (n = 0 ; *s != '\0' ; s++)
		n++;
	return (n);
}
