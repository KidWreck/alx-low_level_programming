#include <stdio.h>
#include "main.h"

/**
 * print_array - print the selected cell
 * @a: pointer string
 * @n: number of cell to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
