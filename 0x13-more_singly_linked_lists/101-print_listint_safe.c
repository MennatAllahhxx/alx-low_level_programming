#include "lists.h"
/**
 * _check_and_print - Check the list and print
 * @head: of newlist to check
 * @prev: node on list to check
 *
 * Return: number of nodes
 */
int _check_and_print(const listint_t *head, listint_safe *prev)
{
listint_safe n, *temp;
if (head->next == NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
return (1);
}
n.next = prev;
n.addy = head;
temp = n.next;
while (temp != NULL && temp->addy != head)
	temp = temp->next;
if (temp != NULL)
{
printf("-> [%p] %d\n", (void *)head, head->n);
return (0);
}
printf("[%p] %d\n", (void *)head, head->n);
return (1 + _check_and_print(head->next, &n));
}

/**
 * print_listint_safe - a fun
 * @head: op
 * Return: sth
 */
size_t print_listint_safe(const listint_t *head)
{
if (!head)
	exit(98);
return (_check_and_print(head, NULL));
}
