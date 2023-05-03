#include "lists.h"
/**
 * _check_and_free - free a list
 * @head: of the list
 * @prev: prev node in the list
 * Return: number of nodes
 */
int _check_and_free(listint_t *head, listint_safe *prev)
{
listint_safe n, *tmp;
int size;
if (head->next == NULL)
{
free(head);
return (1);
}
n.next = prev;
n.addy = head;
tmp = n.next;
while (tmp != NULL && tmp->addy != head)
	tmp = tmp->next;
if (tmp != NULL)
	return (0);
size = 1;
size += _check_and_free(head->next, &n);
free(head);
return (size);
}
/**
 * free_listint_safe - free a listint_t safely
 * @h: head of list
 * Return: size of list free'd
 */
size_t free_listint_safe(listint_t **h)
{
int t;
if (*h == NULL)
	return (0);
t = _check_and_free(*h, NULL);
*h = NULL;
return (t);
}
