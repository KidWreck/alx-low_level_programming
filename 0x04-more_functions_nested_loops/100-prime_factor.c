#include <stdio.h>
#include <math.h>

/**
 * main - calculate the biggsst factor
 * Return: always 0
 */

int main(void)
{
	long int x, max = -1, n = 612852475143;

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}
	for (x = 3; x <= sqrt(n); x = x + 2)
	{
		while (n % x == 0)
		{
			max = x;
			n = n / 2;
		}
	}
	if (n > 2)
		max = n;
	printf("%lu\n", max);

	return (0);
}
