#include <stdio.h>
#include "lists.h"
/**
 * print_list - a fun
 * @h: op
 * Return: number
 */
size_t print_list(const list_t *h)
{
size_t i = 0;
while (h)
{
if (h->str == NULL)
	printf("[0] (nil)\n");
else
	printf("[%u] %s\n", h->len, h->str);
i++;
h = h->next;
}
return (i);
}
