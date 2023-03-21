#include "main.h"
/**
 * times_table - a fun to print times table
 */
void times_table(void)
{
int i, j, s, l, r;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
s = i * j;
if (s < 10)
{ 
if (j != 0)
	_putchar(32);
_putchar(s + '0');
}
else
{
l = s / 10;
r = s % 10;
_putchar(l + '0');
_putchar(r + '0');
}

if (j < 9)
{
_putchar(44);
_putchar(32);
}
else
{
_putchar('\n');
}
}
}
}
