#include "lists.h"
/**
 * free_listint - a fun
 * @head: op
 */
void free_listint(listint_t *head)
{
listint_t *n;
while (head)
{
n = head;
head = head->next;
free(n);
}
}
