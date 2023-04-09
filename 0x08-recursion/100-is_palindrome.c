#include "main.h"
/**
 * _strlen_recursion - a fun
 * @s: operator
 * Return: length
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
/**
 * is_palindrome - a fun
 * @s: operator
 * Return: 1 if yes
 */
int is_palindrome(char *s)
{
int i;
i = _strlen_recursion(s);
return (check(s, i));
}
/**
 * check - a fun
 * @s: operator
 * @i: operator
 * Return: value
 */
int check(char *s, int i)
{
if (i <= 1)
	return (1);
if (*s != *(s + i - 1))
	return (0);
else
	return (check(s + 1, i -2));
}
