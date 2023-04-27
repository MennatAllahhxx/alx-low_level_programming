#include "lists.h"
/**
 * *add_node - a fun
 * @head: op
 * @str: op
 * Return: add
 */
list_t *add_node(list_t **head, const char *str)
{
int len;
list_t *n;
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
n->next = *head;
*head = n;
return (n);
}
