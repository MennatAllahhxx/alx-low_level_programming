#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program to print possible combinations of 4 digits
 * Return: 0 (success)
 */
int main(void)
{
int i = 0, j = 0, k = 0, l = 0;
while (i < 10)
{
while (j < 10)
{
k = i;
l = j + 1;
while (k < 10)
{
while (l < 10)
{
if (!(i == k && j == l))
{
putchar('0' + i);
putchar('0' + j);
putchar(32);
putchar('0' + k);
putchar('0' + l);
if ((i != 9) || (j != 8) || (k != 9) || (l != 9))
{
putchar(44);
putchar(32);
}
}
l++;
}
k++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
