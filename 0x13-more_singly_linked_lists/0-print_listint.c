#include "lists.h"
/**
 * print_listint - a fun
 * @h: op
 * Return: sth
 */
size_t print_listint(const listint_t *h)
{
size_t size = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
size++;
}
return (size);
}
