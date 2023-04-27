#include "lists.h"
/**
 * *add_node_end - a fun
 * @head: op
 * @str: op
 * Return: add
 */
list_t *add_node_end(list_t **head, const char *str)
{
int len;
list_t *n, *temp;
n = malloc(sizeof(list_t));
if (n == NULL)
	return (NULL);
n->str = strdup(str);
if (n->str == NULL)
{
free(n);
return (NULL);
}
for (len = 0; str[len]; len++)
	;
n->len = len;
n->next = NULL;
if (*head == NULL)
{
*head = n;
return (n);
}
temp = *head;
while (temp->next)
	temp = temp->next;
temp->next = n;
return (n);
}
