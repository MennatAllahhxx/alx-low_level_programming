#include "lists.h"
/**
 * list_len - a fun
 * @h: op
 * Return: number
 */
size_t list_len(const list_t *h)
{
size_t i = 0;

while (h)
{
i++;
h = h->next;
}
return (i);
}
