#include "lists.h"
/**
 * *get_nodeint_at_index - a fun
 * @head: op
 * @index: op
 * Return: data
 */
listint_t *get_nodeint_at_index(listint_t *head,
		unsigned int index)
{
unsigned int i;
listint_t *n;
n = head;
for (i = 0; i < index; i++)
{
if (!(n->next))
	return (NULL);
head = head->next;
}
return (head);
}
