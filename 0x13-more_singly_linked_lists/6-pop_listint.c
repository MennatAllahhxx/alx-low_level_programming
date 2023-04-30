#include "lists.h"
/**
 * pop_listint - a fun
 * @head: op
 * Return: add
 */
int pop_listint(listint_t **head)
{
listint_t *n;
n = *head;
if (!n)
	return (0);
*head = (*head)->next;
free(n);
return (n->n);
}
