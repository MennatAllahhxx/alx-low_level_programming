#include "lists.h"
/**
 * free_list - a fun
 * @head: op
 */
void free_list(list_t *head)
{
list_t *n;
while (head)
{
n = head;
head = head->next;
free(n->str);
free(n);
}
}
