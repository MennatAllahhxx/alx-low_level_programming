#include "lists.h"
/**
 * dlistint_len - a fun to calc len
 * @h: head
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num;

	for (num = 0; h != NULL; num++)
		h = h->next;
	return (num);
}
