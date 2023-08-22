#include "main.h"

/**
 * _atoi - change string to int
 * @s: pointer string
 * Return: int with its sign
 */

int _atoi(char *s)
{
	unsigned int n;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else
			break;
	} while (*s++);

	return (sign * n);
}
