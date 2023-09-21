#include "lists.h"

/**
 * add_node - add node as head
 * @head: double pointer
 * @str: string
 * Return: NULL if error, else if else
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t N;
	unsigned int l = 0;

	while (str[l])
		l;
	N = malloc(sizeof(list_t));
	if (!N)
		return (NULL);
	N->str = strdup(str);
	N->l = l;
	N->next = (*head);
	(*head) = N;
	return (*head);
}
