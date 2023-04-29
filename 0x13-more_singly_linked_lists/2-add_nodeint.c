#include "lists.h"
/**
 * *add_nodeint - a fun
 * @head: op
 * @n: op
 * Return: add
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ad;
ad = malloc(sizeof(listint_t));
if (ad == NULL)
	return (NULL);
ad->n = n;
ad->next = *head;
*head = ad;
return (ad);
}
