#include "lists.h"

/**
 * add_nodeint - add head
 * @head: head
 * @n: data of new head
 * Return: NULL if fail, else if else
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *N;

	N = malloc(sizeof(listint_t));
	if (!N)
		return (NULL);
	N->n = n;
	N->next = *head;
	*head = N;
	return (N);
}
