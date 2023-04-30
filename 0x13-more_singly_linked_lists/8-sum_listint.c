#include "lists.h"
/**
 * sum_listint - a fun
 * @head: op
 * Return: add
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *n;
n = head;
if (!n)
	return (0);
while (head->next)
{
sum += head->n;
head = head->next;
}
if (sum)
	sum += head->n;
return (sum);
}
