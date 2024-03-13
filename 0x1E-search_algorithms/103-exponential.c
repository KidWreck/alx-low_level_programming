/**
 * exponential_search - Exponential search algorithm
 *
 * @array: Array.
 * @size: Number of elements in array.
 * @value: Value to search for in the array.
 *
 * Return: The first index or -1 if NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, min = 0;
	int result;

	if (array != NULL)
	{
		while (bound < size && array[bound] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
			bound *= 2;
		}
		if (bound + 1 < size)
			min = bound + 1;
		else
			min = size;
		printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, min - 1);
		result = b_search(array, bound / 2,  min, value);
		if (result != -1)
			return (result);
	}
	return (-1);
}
