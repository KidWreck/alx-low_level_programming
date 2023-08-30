#include "main.h"
/**
 * factorial - factorial of a positive number
 * @n: number to factorial
 * Return: -1 if error, result if else
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
