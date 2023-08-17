#include <stdio.h>
#include <math.h>

/**
 * main - calculate the biggsst factor
 * Return: always 0
 */

int main(void)
{
	long int x, max, n = 612852475143;
	double sq = sqrt(n);
	
	for (x = 2; x <= sq; x++)
	{
		if (n % x == 0)
			max = n / x;
	}
	printf("%lu\n", max);

	return (0);
}
