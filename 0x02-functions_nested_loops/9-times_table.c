#include "main.h"
/**
 * times_table - a fun to print times table
 */
void times_table(void)
{
int i, j, s;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
s = i * j;
_putchar(s + '0');
if (j < 9)
{
_putchar(44);
_putchar(32);
}
else
{
_putchar(36);
}
}
_putchar('\n');
}
}
