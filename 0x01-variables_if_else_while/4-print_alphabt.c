#include <stdio.h>
/**
 * main - a program to print alphabet except e and q
 * Return: 0 (success)
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
if (c != 'e' && c != 'q')
	putchar(c);

c++;
}
return (0);
}
