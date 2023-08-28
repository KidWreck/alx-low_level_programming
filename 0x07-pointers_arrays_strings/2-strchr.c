#include "main.h"

/**
 * _strchr - cut before the meaning char
 * @s: the pointer
 * @c: the char to be found
 * Return: the string minus before the char
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			_putchar(s + i);
	}
	return ('\0');
}
