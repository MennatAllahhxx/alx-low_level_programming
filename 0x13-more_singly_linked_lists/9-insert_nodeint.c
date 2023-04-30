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
listint_t *new;
unsigned int i;
if (!head)
	return (NULL);
new = malloc(sizeof(listint_t));
if (!new)
	return (NULL);
new->n = n;
if (!idx)
{
new->next = *head;
*head = new;
return (new);
}
for (i = 0; *head && i < idx - 1; i++)
{
head = &(*head)->next;
}
if (!*head || !(*head)->next)
{
free(new);
return (NULL);
}
new->next = (*head)->next;
(*head)->next = new;
return (new);
}
