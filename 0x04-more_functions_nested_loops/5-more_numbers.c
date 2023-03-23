#include "main.h"
/**
 * more_numbers - a fun to print more numbers
 * Return: nth
 */
void more_numbers(void)
{
int i = 0, j, s, l = 1;
for (j = 0; j < 10; j++)
{
for (i = 0; i < 15; i++)
{
if (i <= 9)
{
s = i;
}
else if (i > 9)
{
s = i - 10;
_putchar(l + '0');
}
_putchar(s + '0');
}
_putchar('\n');
}
}
