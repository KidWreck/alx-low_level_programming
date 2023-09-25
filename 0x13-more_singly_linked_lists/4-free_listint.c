#include "lists.h"

/**
 * free_listint - free linked list
 * @head: to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *f;

	while (head)
	{
		f = head->next;
		free(head);
		head = f;
	}
}
