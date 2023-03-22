#include "main.h"
/**
 * print_times_table - a fun to print times table
 * @n: input parameter
 */
void print_times_table(int n)
{
if (n < 16 && n > -1)
{int i, j, s;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{s = i * j;
if (s < 10)
{ 
if (j != 0)
{ _putchar(32);
_putchar(32);
}
_putchar(s + '0');
}
else if (s > 9 && s < 100) {
_putchar(32);
_putchar((s / 10) + '0');
_putchar((s % 10) + '0');
}
else
{ _putchar((s / 100) + '0');
_putchar(((s % 100) / 10) + '0');
_putchar((s % 10) + '0');
}
if (j < n)
{ _putchar(44);
_putchar(32);
}
else _putchar('\n');
}
}
}
}
