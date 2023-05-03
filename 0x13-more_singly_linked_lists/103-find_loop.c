#include "lists.h"
/**
 * _check_and_find - Check the list and return the looping node
 * @head: of list to check
 * @prev: prev node on the list
 * Return: Node that loops, or NULL
 */
listint_t *_check_and_find(listint_t *head, listint_safe *prev)
{
listint_safe n, *temp;
if (head->next == NULL)
	return (NULL);
n.next = prev;
n.addy = head;
temp = n.next;
while (temp != NULL && temp->addy != head)
	temp = temp->next;
if (temp != NULL)
	return (head);
return (_check_and_find(head->next, &n));
}

/**
 * find_listint_loop - find if list
 * @head: of the list
 * Return: Node that loops, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
if (head == NULL)
	return (NULL);
return (_check_and_find(head, NULL));
}
