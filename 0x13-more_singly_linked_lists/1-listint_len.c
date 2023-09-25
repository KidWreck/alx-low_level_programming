#include "lists.h"

/**
 * listint_len - print all
 * @h: linked list
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
