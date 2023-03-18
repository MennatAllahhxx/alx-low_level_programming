#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program to print all possible combinations of 2 different digits
 * Return: 0 (success)
 */
int main(void)
{
int i = 0, j;
while (i < 10)
{
j = i + 1;
while (j < 10)
{
if (i != j)
{
putchar('0' + i);
putchar('0' + j);
if ((i != 8) || (j != 9))
{
putchar(44);
putchar(32);
}
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
