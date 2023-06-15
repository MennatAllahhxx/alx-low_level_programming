#include "lists.h"
/**
 * add_dnodeint_end - a fun to add node
 * @head: head
 * @n: data
 * Return: address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmp;

	tmp = *head;
	if (!head)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (node);
	node->n = n;
	node->next = NULL;
	if (!*head)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	while (tmp->next)
		tmp = tmp->next;
	node->prev = tmp;
	tmp->next = node;
	return (node);
}
