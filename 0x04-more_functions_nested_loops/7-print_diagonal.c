#include "main.h"
/**
 * print_diagonal - a fun to print diagonally
 * @n: number
 * Return: nth
 */
void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar(92);
if (j != (i - 1))
{
_putchar('\n');
}
}
_putchar('\n');
}
