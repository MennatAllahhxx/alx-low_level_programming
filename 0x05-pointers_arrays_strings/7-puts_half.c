#include "main.h"
/**
 * puts_half - fun to do sth
 * @str: string to be manipulated
 * Return: nth
 */
void puts_half(char *str)
{
int i, l = 0;
while (str[l] != '\0')
{
l++;
}
for (i = (l / 2); i < l; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
