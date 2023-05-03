#include "lists.h"
/**
 * *insert_nodeint_at_index - a fun
 * @head: op
 * @idx: op
 * @n: op
 * Return: add
 */
listint_t *insert_nodeint_at_index(listint_t **head,
		unsigned int idx, int n)
{
listint_t *new, *temp;
unsigned int i;
if (!head)
	return (NULL);
if (!(*head))
{
new = malloc(sizeof(listint_t));
if (!new)
	return (NULL);
*head = new;
new->next = NULL;
new->n = n;
return (new);
}
else if (!idx)
{
new = malloc(sizeof(listint_t));
if (!new)
	return (NULL);
new->next = *head;
new->n = n;
*head = new;
return (new);
}
idx++;
temp = *head;
for (i = 1; i < idx - 1 && temp->next; i++)
	temp = temp->next;
if (i != idx - 1)
	return (NULL);
new = malloc(sizeof(listint_t));
if (!new)
	return (NULL);
new->n = n;
new->next = temp->next;
temp->next = new;
return (new);
}
