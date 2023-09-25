#include "lists.h"

/**
 * add_nodeint_end - add tail
 * @head: head
 * @n: data of new node
 * Return: NULL if fail, else if else
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *N;
	listint_t *temp = *head

	N = malloc(sizeof(listint_t));
	if (!N)
		return (NULL);
	N->n = n;
	N->next = NULL;
	if (*head == NULL)
		*head = N;
	while (temp->next)
		temp = temp->next;
	temp->next = N;
	return (N);
}
