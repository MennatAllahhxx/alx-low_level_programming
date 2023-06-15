#include "lists.h"
/**
 * sum_dlistint - a fun to calc sum
 * @head: head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	if (!head)
		return (0);
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
