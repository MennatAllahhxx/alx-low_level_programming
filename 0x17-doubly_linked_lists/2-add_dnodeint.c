#include "lists.h"
/**
 * add_dnodeint - a fun to add node
 * @head: head
 * @n: data
 * Return: address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (!head)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (node);
	node->n = n;
	node->prev = NULL;
	node->next = (*head);
	if (*head)
		(*head)->prev = node;
	*head = node;
	return (node);
}
