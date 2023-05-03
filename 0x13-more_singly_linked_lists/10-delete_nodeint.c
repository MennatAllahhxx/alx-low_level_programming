#include "lists.h"
/**
 * delete_nodeint_at_index - a fun
 * @head: op
 * @index: op
 * Return: 1 if success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *new, *temp;
unsigned int i;
if (!(*head))
	return (-1);
if (!index)
{
new = *head;
*head = (*head)->next;
free(new);
return (1);
}
temp = *head;
for (i = 0; i < index - 1 && temp; i++)
	temp = temp->next;
if (i != index - 1 || !(temp->next))
	return (-1);
new = temp->next;
temp->next = new->next;
free(new);
return (1);
}
