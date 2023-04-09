#include "main.h"
/**
 * _puts_recursion - a fun
 * @s: operand
 * Return: nth
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
