#include "lists.h"
/**
 * listint_len - a fun
 * @h: op
 * Return: sth
 */
size_t listint_len(const listint_t *h)
{
size_t size = 0;
while (h)
{
h = h->next;
size++;
}
return (size);
}
