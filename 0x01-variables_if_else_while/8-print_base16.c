#include <stdio.h>
/**
 * main - a program to print all numbers of base 16
 * Return: 0 (success)
 */
int main(void)
{
int i = 0;
char c = 'A';
while (i < 10)
{
putchar('0' + i);
i++;
}
while (c < 'E')
{
putchar(c);
c++; }
putchar('\n');
return (0);
}
