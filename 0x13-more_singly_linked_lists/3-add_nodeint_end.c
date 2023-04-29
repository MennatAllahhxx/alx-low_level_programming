#include "lists.h"
/**
 * *add_nodeint_end - a fun
 * @head: op
 * @n: op
 * Return: add
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ad, *temp;
ad = malloc(sizeof(listint_t));
if (ad == NULL)
	return (NULL);
ad->n = n;
ad->next = NULL;
if (!*head)
{
*head = ad;
return (ad);
}
temp = *head;
while (temp->next)
	temp = temp->next;
temp->next = ad;
return (ad);
}
