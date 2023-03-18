#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program to print possible combinations of 4 digits
 * Return: 0 (success)
 */
int main(void)
{
int i = 0, c = 0, c2, j = 0, k = 0, l = 0;
while (c <= 98)
{
i = (c / 10 + '0');
j = (c % 10 + '0');
c2 = 0;
while (c2 <= 99)
{
k = (c2 / 10 + '0');
l = (c % 10 + '0');

if (c < c2)
{
putchar('0' + i);
putchar('0' + j);
putchar(32);
putchar('0' + k);
putchar('0' + l);
if (c != 98)
{
putchar(44);
putchar(32);
}
}
c2++;
}
c++;
}
putchar('\n');
return (0);
}
