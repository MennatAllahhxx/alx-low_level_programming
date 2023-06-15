#include "lists.h"
/**
 * get_dnodeint_at_index - a fun to get node
 * @head: head
 * @index: index
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head,
		unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	node = head;
	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (!node)
			return (NULL);
		node = node->next;
	}
	return (node);
}
