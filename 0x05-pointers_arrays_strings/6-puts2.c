#include "main.h"
/**
 * puts2 - print string
 * @str: operand
 * Return: nth
 */
void puts2(char *str)
{
int i = 0, j;
while (str[i] != '\0')
{
i++;
}
for (j = 0; j <= i; j++)
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}
