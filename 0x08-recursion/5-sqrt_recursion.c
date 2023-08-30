#include "main.h"

int _sqrt(int n, int i);

/**
 *  _sqrt_recursion - square root of a number
 *  @n: number to root
 *  Return: -1 if error, result if else
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - helper
 * @n: number to root
 * @i: iterrator
 * Return: i
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
