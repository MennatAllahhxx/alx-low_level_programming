#include "lists.h"
/**
 * print_dlistint - a fun to print
 * @h: head
 * Return: no of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num;

	for (num = 0; h != NULL; num++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
