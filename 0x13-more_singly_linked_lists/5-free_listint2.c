#include "lists.h"
/**
 * free_listint2 - a fun
 * @head: op
 */
void free_listint2(listint_t **head)
{
listint_t *n;
if (!head)
	return;
while (*head)
{
n = *head;
*head = (*head)->next;
free(n);
}
free(*head);
*head = NULL;
}
