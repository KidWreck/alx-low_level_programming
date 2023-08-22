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

	for (i = 0 ; a[i] != '\0' ; i++)
	{
		while (i < n)
			printf("%d", a[i]);
	}
	printf("\n");
}
