#include "lists.h"
/**
 * delete_dnodeint_at_index - a fun to delete
 * @head: head
 * @index: index
 * Return: 1 if success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	if (!head || !(*head))
		return (-1);
	node = *head;
	if (!index)
	{
		if (node->next)
		{
			node->next->prev = NULL;
			*head = (*head)->next;
			free(node);
		}
		else
			free(*head);
		return (1);
	}
	for (i = 0; i < index && node; i++)
		node = node->next;
	if (node->next && node->prev)
	{
		node->next->prev = node->prev;
		node->prev->next = node->next;
		free(node);
		return (1);
	}
	else if (node->prev && !node->next)
	{
		node->prev->next = NULL;
		free(node);
		return (1);
	}
	return (-1);
}
