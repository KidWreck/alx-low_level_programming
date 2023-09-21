#include "lists.h"

/**
 * list_len - return # of elements
 * @h: pointer
 * Return: # of elements
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (s);
}
