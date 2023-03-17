#include <stdio.h>
/**
 * main - a program to print all numbers of base 10
 * Return: 0 (success)
 */
int main(void)
{
int i = 0;
while (i < 10)
{
putchar('0' + i);
i++;
}
putchar('\n');
return (0);
}
