#include "main.h"
/**
 * puts_half - fun to do sth
 * @str: string to be manipulated
 * Return: nth
 */
void puts_half(char *str)
{
int i, j, n, l = 0;
while (str[l] != '\0')
{
l++;
}
if (l % 2 == 0)
{
for (i = (l / 2); i < l; i++)
{
_putchar(str[i]);
}
}
else
{
n = (l - 1) / 2;
for (j = (l - n); j < l; j++)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
