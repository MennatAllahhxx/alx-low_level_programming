#include "lists.h"
/**
 * *reverse_listint - a fun
 * @head: op
 * Return: add
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *x, *y = NULL;
while (*head)
{
x = (*head)->next;
(*head)->next = y;
y = *head;
*head = x;
}
*head = y;
return (*head);
}
