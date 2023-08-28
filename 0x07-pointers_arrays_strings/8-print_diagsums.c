#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum the diag and the diag reverse
 * @a: matrix 2D
 * @size: x=y
 */

void print_diagsums(int *a, int size)
{
	int i, add = 0, dda = 0;

	for (i = 0 ; i < size ; i++)
	{
		add += a[i];
		dda += a[size - i - 1];
		a += size;
	}
	printf("%d, %d\n", add, dda);
}
