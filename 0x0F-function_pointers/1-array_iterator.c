#include "function_pointers.h"

/**
 * array_iterator - counter of string
 * @array: string
 * @size: size of array
 * @action: movment in the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
	{
		while (array <= end)
			action(*array++);
	}
}
