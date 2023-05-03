#include "lists.h"
/**
 * print_listint_safe - a fun
 * @head: op
 * Return: sth
 */
size_t print_listint_safe(const listint_t *head)
{
size_t size = 0;
const listint_t *temp = NULL;
if (!head)
	exit(98);
while (head)
{
size++;
printf("[%p] %d\n", (void *)head, head->n);
if (head < head->next && head->next)
{
temp = head;
head = head->next;
}
else
{
head = head->next;
printf("-> [%p] %d\n", (void *)temp, temp->n);
break;
}
}
return (size);
}
