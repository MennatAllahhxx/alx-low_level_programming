#include <stdio.h>
/**
 * main - a program to print all numbers of base 10
 * Return: 0 (success)
 */
int main(void)
{
int i = 0;
while (i < 9)
{
putchar('0' + i);
putchar(44);
putchar(32);
i++;
}
putchar('0' + i);
return (0);
}
