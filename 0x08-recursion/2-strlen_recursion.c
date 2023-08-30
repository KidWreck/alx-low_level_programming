#include "main.h"

/**
 * _strlen_recursion - count char in string
 * @s: pointer to string
 * Return: number of chars
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s > '\0')
	{
		i += _strlen_recursion(s + 1) + 1;
	}
	return (i);
}
