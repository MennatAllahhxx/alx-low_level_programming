#include "lists.h"
/**
 * insert_dnodeint_at_index - a fun to insert
 * @h: head
 * @idx: index
 * @n: data
 * Return: node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h,
		unsigned int idx, int n)
{
	dlistint_t *node, *tmp;
	unsigned int i;

	if (!h)
		return (NULL);
	if (!idx)
	{
		node = add_dnodeint(h, n);
		return (node);
	}
	tmp = *h;
	for (i = 0; i < (idx -1) && tmp; i++)
		tmp = tmp->next;
	if (tmp)
	{
		node = malloc(sizeof(dlistint_t));
		if (!node)
			return (NULL);
		node->n = n;
		node->prev = tmp;
		node->next = tmp->next;
		tmp->next->prev = node;
		tmp->next = node;
		return (node);
	}
	if (i == idx)
	{
		node = add_dnodeint_end(h, n);
		return (node);
	}
	return (NULL);
}
