#include <stdio.h>
/**
 * main - a program to print the alphabet
 * Return: 0 (success)
 */
int main(void)
{
char c, b;
c = 'a', b = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (b <= 'Z')
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
