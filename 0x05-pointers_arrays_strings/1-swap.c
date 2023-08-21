#include "main.h"

/**
 * swap_int - swapping int
 * @a: int
 * @b: int
 */

void swap_int(int *a, int *b)
{
	int h;

	h = *a;
	*a = *b;
	*b = h;
}
