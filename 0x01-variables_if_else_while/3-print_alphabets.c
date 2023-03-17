#include <stdio.h>
/**
 * main - a program to print the alphabet
 * Return: 0 (success)
 */
int main(void)
{
char c , C;
c = 'a', C = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (C <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
